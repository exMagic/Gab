#pragma once

namespace Gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^  btnPSzukaj;
	public:
	private: System::Windows::Forms::TextBox^  txtPSzukaj;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dgUzytkownicy;
	public:
		String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=kolanko7;database=gabinet";
		int id_uzytkownika;
	
			 

		Program(int uzytkownik)
		{
			InitializeComponent();
			int id_uzytkownika = uzytkownik;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtHStare;
	private: System::Windows::Forms::Button^  btnHZmien;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtHNowe2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtHNowe1;

	private: System::Windows::Forms::Label^  label3;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnPSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtPSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgUzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtHStare = (gcnew System::Windows::Forms::TextBox());
			this->btnHZmien = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(29, 62);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(803, 445);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnPSzukaj);
			this->tabPage1->Controls->Add(this->txtPSzukaj);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dgUzytkownicy);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(795, 419);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Pracownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnPSzukaj
			// 
			this->btnPSzukaj->Location = System::Drawing::Point(275, 19);
			this->btnPSzukaj->Name = L"btnPSzukaj";
			this->btnPSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnPSzukaj->TabIndex = 3;
			this->btnPSzukaj->Text = L"Szukaj";
			this->btnPSzukaj->UseVisualStyleBackColor = true;
			this->btnPSzukaj->Click += gcnew System::EventHandler(this, &Program::btnPSzukaj_Click);
			// 
			// txtPSzukaj
			// 
			this->txtPSzukaj->Location = System::Drawing::Point(109, 21);
			this->txtPSzukaj->Name = L"txtPSzukaj";
			this->txtPSzukaj->Size = System::Drawing::Size(160, 20);
			this->txtPSzukaj->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(43, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Pracownik:";
			// 
			// dgUzytkownicy
			// 
			this->dgUzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUzytkownicy->Location = System::Drawing::Point(480, 19);
			this->dgUzytkownicy->Name = L"dgUzytkownicy";
			this->dgUzytkownicy->Size = System::Drawing::Size(297, 383);
			this->dgUzytkownicy->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(795, 419);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmiana hasła";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtHStare);
			this->groupBox1->Controls->Add(this->btnHZmien);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtHNowe2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtHNowe1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(224, 83);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(328, 236);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Zmiana hasła";
			// 
			// txtHStare
			// 
			this->txtHStare->Location = System::Drawing::Point(155, 65);
			this->txtHStare->Name = L"txtHStare";
			this->txtHStare->Size = System::Drawing::Size(100, 20);
			this->txtHStare->TabIndex = 3;
			this->txtHStare->TextChanged += gcnew System::EventHandler(this, &Program::txtHStare_TextChanged);
			// 
			// btnHZmien
			// 
			this->btnHZmien->Enabled = false;
			this->btnHZmien->Location = System::Drawing::Point(104, 182);
			this->btnHZmien->Name = L"btnHZmien";
			this->btnHZmien->Size = System::Drawing::Size(120, 23);
			this->btnHZmien->TabIndex = 6;
			this->btnHZmien->Text = L"Zmień";
			this->btnHZmien->UseVisualStyleBackColor = true;
			this->btnHZmien->Click += gcnew System::EventHandler(this, &Program::btnHZmien_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Stare hasło:";
			// 
			// txtHNowe2
			// 
			this->txtHNowe2->Location = System::Drawing::Point(155, 123);
			this->txtHNowe2->Name = L"txtHNowe2";
			this->txtHNowe2->Size = System::Drawing::Size(100, 20);
			this->txtHNowe2->TabIndex = 5;
			this->txtHNowe2->TextChanged += gcnew System::EventHandler(this, &Program::txtHNowe2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nowe hasło:";
			// 
			// txtHNowe1
			// 
			this->txtHNowe1->Location = System::Drawing::Point(155, 94);
			this->txtHNowe1->Name = L"txtHNowe1";
			this->txtHNowe1->Size = System::Drawing::Size(100, 20);
			this->txtHNowe1->TabIndex = 4;
			this->txtHNowe1->TextChanged += gcnew System::EventHandler(this, &Program::txtHNowe1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Powtórz hasło:";
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 541);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: Void btnHZmien_pokaz() {
			if (txtHStare->Text != "" && txtHNowe1->Text != "" && txtHNowe2->Text == txtHNowe1->Text) {
				btnHZmien->Enabled = true;
			}
			else
			{
				btnHZmien->Enabled = false;
			}
		}
	private: System::Void txtHStare_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btnHZmien_pokaz();
	}
	private: System::Void txtHNowe1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btnHZmien_pokaz();
	}
	private: System::Void txtHNowe2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		btnHZmien_pokaz();
	}
	private: System::Void btnHZmien_Click(System::Object^  sender, System::EventArgs^  e) {
		// Zmiana hasła
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);		
		MySqlCommand^ zapytanie = gcnew MySqlCommand("update uzytkownik set haslo = password('" + txtHNowe1->Text + "') where haslo = password('" +txtHStare->Text+ "') and uzytkownik_id = "+id_uzytkownika+"", laczBaze);
		try {
			laczBaze->Open();
			if (zapytanie->ExecuteNonQuery())
			{
				MessageBox::Show("Hasło zostało zmienione");
			}
			else {
				MessageBox::Show("Podane hasło jest niepoprawne");
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
	}

private: System::Void btnPSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM uzytkownik where concat(uzytkownik_nazwa, imie, nazwisko) like '%"+txtPSzukaj->Text+"%'", laczBaze);
	try
	{
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		dgUzytkownicy->DataSource = zrodlo;
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
};
}
