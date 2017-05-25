﻿#pragma once
#include "Program.h"

namespace Gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnZaloguj;
	private: System::Windows::Forms::Button^  btnAnuluj;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtUzytkownik;
	private: System::Windows::Forms::TextBox^  txtHaslo;
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnZaloguj = (gcnew System::Windows::Forms::Button());
			this->btnAnuluj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUzytkownik = (gcnew System::Windows::Forms::TextBox());
			this->txtHaslo = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnZaloguj
			// 
			this->btnZaloguj->Location = System::Drawing::Point(181, 214);
			this->btnZaloguj->Name = L"btnZaloguj";
			this->btnZaloguj->Size = System::Drawing::Size(75, 23);
			this->btnZaloguj->TabIndex = 0;
			this->btnZaloguj->Text = L"Zaloguj";
			this->btnZaloguj->UseVisualStyleBackColor = true;
			this->btnZaloguj->Click += gcnew System::EventHandler(this, &Logowanie::btnZaloguj_Click);
			// 
			// btnAnuluj
			// 
			this->btnAnuluj->Location = System::Drawing::Point(28, 214);
			this->btnAnuluj->Name = L"btnAnuluj";
			this->btnAnuluj->Size = System::Drawing::Size(75, 23);
			this->btnAnuluj->TabIndex = 1;
			this->btnAnuluj->Text = L"Anuluj";
			this->btnAnuluj->UseVisualStyleBackColor = true;
			this->btnAnuluj->Click += gcnew System::EventHandler(this, &Logowanie::btnAnuluj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"użytkownik";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"hasło";
			// 
			// txtUzytkownik
			// 
			this->txtUzytkownik->Location = System::Drawing::Point(116, 47);
			this->txtUzytkownik->Name = L"txtUzytkownik";
			this->txtUzytkownik->Size = System::Drawing::Size(140, 20);
			this->txtUzytkownik->TabIndex = 4;
			this->txtUzytkownik->Text = L"admin";
			// 
			// txtHaslo
			// 
			this->txtHaslo->Location = System::Drawing::Point(116, 90);
			this->txtHaslo->Name = L"txtHaslo";
			this->txtHaslo->PasswordChar = '*';
			this->txtHaslo->Size = System::Drawing::Size(140, 20);
			this->txtHaslo->TabIndex = 5;
			this->txtHaslo->Text = L"123";
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->txtHaslo);
			this->Controls->Add(this->txtUzytkownik);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAnuluj);
			this->Controls->Add(this->btnZaloguj);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAnuluj_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void btnZaloguj_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ konfiguracja = L"datasource=10.0.0.112;port=3306;username=toor;password=kolankokolanko7;database=gabinet";
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("select uzytkownik_id from uzytkownik where uzytkownik_nazwa='" + txtUzytkownik->Text + "' and haslo= PASSWORD('" + txtHaslo->Text + "');", laczBaze);

	MySqlDataReader^ odczytanie;
	try {
		laczBaze->Open();
		odczytanie = zapytanie->ExecuteReader();
		if (odczytanie->Read()) {
			int id_uzytkownik = odczytanie->GetInt32(0);
			this->Hide();
			Program^ program = gcnew Program(id_uzytkownik);
			program->ShowDialog();
			this->Close();
		}
		else
		{
			MessageBox::Show("Błędna nazwa użytkownika lub niepoprawne hasło");
		}
	}
	catch (Exception^ ex){
		MessageBox::Show(ex->Message);
	}
	laczBaze->Close();

}

};
}
