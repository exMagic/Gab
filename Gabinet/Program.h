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
	public:
		int id_uzytkownika;

	private: System::Windows::Forms::Button^  btnPSzukaj;
	private: System::Windows::Forms::TextBox^  txtPSzukaj;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dgUzytkownicy;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtPLogin;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtPNazwisko;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtPImie;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  chbPPracownik;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  s;



	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtHStare;
	private: System::Windows::Forms::Button^  btnHZmien;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtHNowe2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtHNowe1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnPDodaj;
	private: System::Windows::Forms::Button^  btnPModyfikuj;
	private: System::Windows::Forms::Button^  btnPUsun;
	public:
		String^ konfiguracja = L"datasource=localhost;port=3306;username=root;password=kolanko7;database=gabinet";
		Program(int uzytkownik)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;
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
			this->s = (gcnew System::Windows::Forms::TabPage());
			this->btnPDodaj = (gcnew System::Windows::Forms::Button());
			this->btnPModyfikuj = (gcnew System::Windows::Forms::Button());
			this->btnPUsun = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPLogin = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtPNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPImie = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chbPPracownik = (gcnew System::Windows::Forms::CheckBox());
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
			this->s->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->s);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(29, 62);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(803, 445);
			this->tabControl1->TabIndex = 0;
			// 
			// s
			// 
			this->s->Controls->Add(this->btnPDodaj);
			this->s->Controls->Add(this->btnPModyfikuj);
			this->s->Controls->Add(this->btnPUsun);
			this->s->Controls->Add(this->groupBox2);
			this->s->Controls->Add(this->btnPSzukaj);
			this->s->Controls->Add(this->txtPSzukaj);
			this->s->Controls->Add(this->label4);
			this->s->Controls->Add(this->dgUzytkownicy);
			this->s->Location = System::Drawing::Point(4, 4);
			this->s->Name = L"s";
			this->s->Padding = System::Windows::Forms::Padding(3);
			this->s->Size = System::Drawing::Size(795, 419);
			this->s->TabIndex = 0;
			this->s->Text = L"Pracownicy";
			this->s->UseVisualStyleBackColor = true;
			// 
			// btnPDodaj
			// 
			this->btnPDodaj->Location = System::Drawing::Point(265, 332);
			this->btnPDodaj->Name = L"btnPDodaj";
			this->btnPDodaj->Size = System::Drawing::Size(75, 23);
			this->btnPDodaj->TabIndex = 7;
			this->btnPDodaj->Text = L"Dodaj";
			this->btnPDodaj->UseVisualStyleBackColor = true;
			this->btnPDodaj->Click += gcnew System::EventHandler(this, &Program::btnPDodaj_Click);
			// 
			// btnPModyfikuj
			// 
			this->btnPModyfikuj->Enabled = false;
			this->btnPModyfikuj->Location = System::Drawing::Point(151, 332);
			this->btnPModyfikuj->Name = L"btnPModyfikuj";
			this->btnPModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnPModyfikuj->TabIndex = 6;
			this->btnPModyfikuj->Text = L"Modyfikuj";
			this->btnPModyfikuj->UseVisualStyleBackColor = true;
			this->btnPModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnPModyfikuj_Click);
			// 
			// btnPUsun
			// 
			this->btnPUsun->Enabled = false;
			this->btnPUsun->Location = System::Drawing::Point(37, 332);
			this->btnPUsun->Name = L"btnPUsun";
			this->btnPUsun->Size = System::Drawing::Size(75, 23);
			this->btnPUsun->TabIndex = 5;
			this->btnPUsun->Text = L"Usuń";
			this->btnPUsun->UseVisualStyleBackColor = true;
			this->btnPUsun->Click += gcnew System::EventHandler(this, &Program::btnPUsun_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->txtPLogin);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtPNazwisko);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->txtPImie);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->chbPPracownik);
			this->groupBox2->Location = System::Drawing::Point(37, 87);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 171);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edycja danych użytkownika";
			// 
			// txtPLogin
			// 
			this->txtPLogin->Location = System::Drawing::Point(72, 83);
			this->txtPLogin->Name = L"txtPLogin";
			this->txtPLogin->Size = System::Drawing::Size(133, 20);
			this->txtPLogin->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Login:";
			// 
			// txtPNazwisko
			// 
			this->txtPNazwisko->Location = System::Drawing::Point(72, 57);
			this->txtPNazwisko->Name = L"txtPNazwisko";
			this->txtPNazwisko->Size = System::Drawing::Size(133, 20);
			this->txtPNazwisko->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Nazwisko:";
			// 
			// txtPImie
			// 
			this->txtPImie->Location = System::Drawing::Point(72, 31);
			this->txtPImie->Name = L"txtPImie";
			this->txtPImie->Size = System::Drawing::Size(133, 20);
			this->txtPImie->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Imię:";
			// 
			// chbPPracownik
			// 
			this->chbPPracownik->AutoSize = true;
			this->chbPPracownik->Location = System::Drawing::Point(211, 30);
			this->chbPPracownik->Name = L"chbPPracownik";
			this->chbPPracownik->Size = System::Drawing::Size(76, 17);
			this->chbPPracownik->TabIndex = 0;
			this->chbPPracownik->Text = L"Pracownik";
			this->chbPPracownik->UseVisualStyleBackColor = true;
			// 
			// btnPSzukaj
			// 
			this->btnPSzukaj->Location = System::Drawing::Point(266, 14);
			this->btnPSzukaj->Name = L"btnPSzukaj";
			this->btnPSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnPSzukaj->TabIndex = 3;
			this->btnPSzukaj->Text = L"Szukaj";
			this->btnPSzukaj->UseVisualStyleBackColor = true;
			this->btnPSzukaj->Click += gcnew System::EventHandler(this, &Program::btnPSzukaj_Click);
			// 
			// txtPSzukaj
			// 
			this->txtPSzukaj->Location = System::Drawing::Point(100, 16);
			this->txtPSzukaj->Name = L"txtPSzukaj";
			this->txtPSzukaj->Size = System::Drawing::Size(160, 20);
			this->txtPSzukaj->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Pracownik:";
			// 
			// dgUzytkownicy
			// 
			this->dgUzytkownicy->AllowUserToAddRows = false;
			this->dgUzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUzytkownicy->Location = System::Drawing::Point(357, 19);
			this->dgUzytkownicy->Name = L"dgUzytkownicy";
			this->dgUzytkownicy->Size = System::Drawing::Size(420, 383);
			this->dgUzytkownicy->TabIndex = 0;
			this->dgUzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUzytkownicy_CellClick);
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
			this->s->ResumeLayout(false);
			this->s->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//edklaracja zmiennych
		int id_rekordu; //wybranie rekordu na którym pracuję - zmienna dla wszystkich siatek
		int pracownik_typ;

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
		MySqlCommand^ zapytanie = gcnew MySqlCommand("update uzytkownik set haslo = password('" + txtHNowe1->Text + "') where haslo = password('" + txtHStare->Text + "') and uzytkownik_id = " + id_uzytkownika + "", laczBaze);
		try {
			laczBaze->Open();
			if (zapytanie->ExecuteNonQuery())
			{
				MessageBox::Show("Hasło zostało zmienione");
			}
			else {
				MessageBox::Show("Podane hasło jest niepoprawne");
			}
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
	}
private: Void pokaz_siatke() {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa as login, pracownik FROM uzytkownik order by nazwisko", laczBaze);
	try
	{
		MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
		moja->SelectCommand = zapytanie;
		DataTable^ tabela = gcnew DataTable();
		moja->Fill(tabela);

		BindingSource^ zrodlo = gcnew BindingSource();
		zrodlo->DataSource = tabela;
		dgUzytkownicy->DataSource = zrodlo;
		laczBaze->Close();
	}
	catch (Exception^ komunikat) {
		MessageBox::Show(komunikat->Message);
	}
}
	private: System::Void btnPSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa as login, pracownik FROM uzytkownik where concat(uzytkownik_nazwa, imie,' ', nazwisko) like '%" + txtPSzukaj->Text + "%' order by nazwisko", laczBaze);
		try
		{
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			dgUzytkownicy->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}

		dgUzytkownicy->Columns[0]->Visible = false;
	}
	private: System::Void dgUzytkownicy_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToInt32(dgUzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
			txtPImie->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txtPNazwisko->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
			txtPLogin->Text = dgUzytkownicy->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
			chbPPracownik->Checked = Convert::ToBoolean(dgUzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value);
			btnPModyfikuj->Enabled = true;
			btnPUsun->Enabled = true;

		}
	}
	private: System::Void btnPDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
		//dodawanie uzytkownikow do bazy
		if (txtPImie->Text->Length < 2 || txtPNazwisko->Text->Length < 2 || txtPLogin->Text->Length < 2) {
			MessageBox::Show("uzupełnij dane!");
		}
		else {
			uzytkownik_typ();
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

			polecenie->Connection = laczBaze;

			polecenie->Transaction = transakcja;
			try{
				polecenie->CommandText = "insert into uzytkownik set imie='"+txtPImie->Text+"', nazwisko='"+txtPNazwisko->Text+"', uzytkownik_nazwa = '"+txtPLogin->Text+"', haslo = password('"+txtPLogin->Text+"'), pracownik = "+pracownik_typ+"";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
				
			}
			laczBaze->Close();

		}
		pokaz_siatke();
	}
	private: Void uzytkownik_typ() {
		if (chbPPracownik->Checked) {
			pracownik_typ = 1;
		}
		else {
			pracownik_typ = 0;
		}
	}
	private: System::Void btnPModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
		//modyfikacja danych użytkownika
		if (txtPImie->Text->Length < 2 || txtPNazwisko->Text->Length < 2 || txtPLogin->Text->Length < 2) {
			MessageBox::Show("uzupełnij dane!");
		}
		else {
			uzytkownik_typ();
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

			polecenie->Connection = laczBaze;

			polecenie->Transaction = transakcja;
			try {
				polecenie->CommandText = "update uzytkownik set imie='" + txtPImie->Text + "', nazwisko='" + txtPNazwisko->Text + "', uzytkownik_nazwa = '" + txtPLogin->Text + "', pracownik = " + pracownik_typ + " where uzytkownik_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczBaze->Close();

		}
		pokaz_siatke();
	}
private: Void wyczysc(Control^ zbior) {
	for each(Control^ element in zbior->Controls) {
		if (element->GetType() == TextBox::typeid){
			element->Text = "";
		}
	}
}

private: System::Void btnPUsun_Click(System::Object^  sender, System::EventArgs^  e) {
	//usuniecie uzytkownika
	if (id_rekordu==1) {
		MessageBox::Show("nie można usunąć administratora!");
	}
	else {
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;
		try {
			if (MessageBox::Show("Czy usunąć użytkownika?", "UWAGA!!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes){
				polecenie->CommandText = "delete from uzytkownik where uzytkownik_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				MessageBox::Show("Użytkownik został usunięty");
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();

	}
	wyczysc(groupBox2);
	chbPPracownik->Checked = false;

	pokaz_siatke();
}
};
}