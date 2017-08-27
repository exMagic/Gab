#pragma once

namespace Gabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	//test inn
	/// <summary>
	/// Summary for Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int id_uzytkownika;
		bool powodzenie = false;

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
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;







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
	private: System::Windows::Forms::GroupBox^  gbGodziny;

	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtP6k;

	private: System::Windows::Forms::TextBox^  txtP6p;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  txtP5k;

	private: System::Windows::Forms::TextBox^  txtP5p;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  txtP4k;

	private: System::Windows::Forms::TextBox^  txtP4p;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtP3k;

	private: System::Windows::Forms::TextBox^  txtP3p;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtP2k;

	private: System::Windows::Forms::TextBox^  txtP2p;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtP1k;

	private: System::Windows::Forms::TextBox^  txtP1p;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::Button^  btnUModyfikuj;
	private: System::Windows::Forms::GroupBox^  gbUslugi;



	private: System::Windows::Forms::TextBox^  txtUOpis;
	private: System::Windows::Forms::TextBox^  txtUCzas;
	private: System::Windows::Forms::TextBox^  txtUCena;
	private: System::Windows::Forms::TextBox^  txtUNazwa;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::DataGridView^  dgUslugi;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  txtUSzukaj;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  btnUDodaj;

	private: System::Windows::Forms::Button^  btnUUsun;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  txtPUNazwisko;
	private: System::Windows::Forms::TextBox^  txtPUImie;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::DataGridView^  dgPUUslugiNowe;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::DataGridView^  dgPUUslugi;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::DataGridView^  dgPUPracownik;
	private: System::Windows::Forms::TextBox^  txtPUSzukaj;
	private: System::Windows::Forms::Button^  btnPUSzukaj;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Button^  btnKDodaj;
	private: System::Windows::Forms::GroupBox^  gbKlienci;
	private: System::Windows::Forms::MaskedTextBox^  txtKKod;
	private: System::Windows::Forms::TextBox^  txtKMiejscowosc;


	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::TextBox^  txtKNumer;

	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  txtKUlica;

	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  txtKTelefon;

	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  txtKEmail;

	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  txtKNazwisko;


	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  txtKImie;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Button^  btnKModyfikuj;
	private: System::Windows::Forms::DataGridView^  dgKlienci;
	private: System::Windows::Forms::Button^  btnKUsun;
	private: System::Windows::Forms::Button^  btnKSzukaj;
	private: System::Windows::Forms::TextBox^  txtKSzukaj;
	private: System::Windows::Forms::Label^  label25;



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
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->btnKDodaj = (gcnew System::Windows::Forms::Button());
			this->gbKlienci = (gcnew System::Windows::Forms::GroupBox());
			this->txtKKod = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtKMiejscowosc = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtKNumer = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtKUlica = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtKTelefon = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->txtKEmail = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->txtKNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->txtKImie = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->btnKModyfikuj = (gcnew System::Windows::Forms::Button());
			this->dgKlienci = (gcnew System::Windows::Forms::DataGridView());
			this->btnKUsun = (gcnew System::Windows::Forms::Button());
			this->btnKSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtKSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->txtPUNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->txtPUImie = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dgPUUslugiNowe = (gcnew System::Windows::Forms::DataGridView());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dgPUUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dgPUPracownik = (gcnew System::Windows::Forms::DataGridView());
			this->txtPUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->btnPUSzukaj = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->btnUDodaj = (gcnew System::Windows::Forms::Button());
			this->btnUUsun = (gcnew System::Windows::Forms::Button());
			this->btnUModyfikuj = (gcnew System::Windows::Forms::Button());
			this->gbUslugi = (gcnew System::Windows::Forms::GroupBox());
			this->txtUOpis = (gcnew System::Windows::Forms::TextBox());
			this->txtUCzas = (gcnew System::Windows::Forms::TextBox());
			this->txtUCena = (gcnew System::Windows::Forms::TextBox());
			this->txtUNazwa = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dgUslugi = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txtUSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gbGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtP6k = (gcnew System::Windows::Forms::TextBox());
			this->txtP6p = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtP5k = (gcnew System::Windows::Forms::TextBox());
			this->txtP5p = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtP4k = (gcnew System::Windows::Forms::TextBox());
			this->txtP4p = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtP3k = (gcnew System::Windows::Forms::TextBox());
			this->txtP3p = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtP2k = (gcnew System::Windows::Forms::TextBox());
			this->txtP2p = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtP1k = (gcnew System::Windows::Forms::TextBox());
			this->txtP1p = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtHStare = (gcnew System::Windows::Forms::TextBox());
			this->btnHZmien = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtHNowe1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->gbKlienci->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKlienci))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugiNowe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUPracownik))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->gbUslugi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUslugi))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->gbGodziny->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(29, 62);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(803, 558);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->btnKDodaj);
			this->tabPage5->Controls->Add(this->gbKlienci);
			this->tabPage5->Controls->Add(this->btnKModyfikuj);
			this->tabPage5->Controls->Add(this->dgKlienci);
			this->tabPage5->Controls->Add(this->btnKUsun);
			this->tabPage5->Controls->Add(this->btnKSzukaj);
			this->tabPage5->Controls->Add(this->txtKSzukaj);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Location = System::Drawing::Point(4, 4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(795, 532);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Klienci";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// btnKDodaj
			// 
			this->btnKDodaj->Location = System::Drawing::Point(314, 493);
			this->btnKDodaj->Name = L"btnKDodaj";
			this->btnKDodaj->Size = System::Drawing::Size(75, 23);
			this->btnKDodaj->TabIndex = 18;
			this->btnKDodaj->Text = L"dodaj";
			this->btnKDodaj->UseVisualStyleBackColor = true;
			this->btnKDodaj->Click += gcnew System::EventHandler(this, &Program::btnKDodaj_Click);
			// 
			// gbKlienci
			// 
			this->gbKlienci->Controls->Add(this->txtKKod);
			this->gbKlienci->Controls->Add(this->txtKMiejscowosc);
			this->gbKlienci->Controls->Add(this->label30);
			this->gbKlienci->Controls->Add(this->label31);
			this->gbKlienci->Controls->Add(this->txtKNumer);
			this->gbKlienci->Controls->Add(this->label32);
			this->gbKlienci->Controls->Add(this->txtKUlica);
			this->gbKlienci->Controls->Add(this->label33);
			this->gbKlienci->Controls->Add(this->txtKTelefon);
			this->gbKlienci->Controls->Add(this->label29);
			this->gbKlienci->Controls->Add(this->txtKEmail);
			this->gbKlienci->Controls->Add(this->label28);
			this->gbKlienci->Controls->Add(this->txtKNazwisko);
			this->gbKlienci->Controls->Add(this->label27);
			this->gbKlienci->Controls->Add(this->txtKImie);
			this->gbKlienci->Controls->Add(this->label26);
			this->gbKlienci->Location = System::Drawing::Point(29, 299);
			this->gbKlienci->Name = L"gbKlienci";
			this->gbKlienci->Size = System::Drawing::Size(740, 188);
			this->gbKlienci->TabIndex = 4;
			this->gbKlienci->TabStop = false;
			this->gbKlienci->Text = L"Edycja danych klienta:";
			// 
			// txtKKod
			// 
			this->txtKKod->Location = System::Drawing::Point(282, 89);
			this->txtKKod->Mask = L"00-999";
			this->txtKKod->Name = L"txtKKod";
			this->txtKKod->Size = System::Drawing::Size(100, 20);
			this->txtKKod->TabIndex = 13;
			// 
			// txtKMiejscowosc
			// 
			this->txtKMiejscowosc->Location = System::Drawing::Point(282, 115);
			this->txtKMiejscowosc->Name = L"txtKMiejscowosc";
			this->txtKMiejscowosc->Size = System::Drawing::Size(100, 20);
			this->txtKMiejscowosc->TabIndex = 15;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(204, 118);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(70, 13);
			this->label30->TabIndex = 14;
			this->label30->Text = L"miejscowość:";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(204, 92);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(76, 13);
			this->label31->TabIndex = 12;
			this->label31->Text = L"kod pocztowy:";
			// 
			// txtKNumer
			// 
			this->txtKNumer->Location = System::Drawing::Point(282, 63);
			this->txtKNumer->Name = L"txtKNumer";
			this->txtKNumer->Size = System::Drawing::Size(100, 20);
			this->txtKNumer->TabIndex = 11;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(204, 66);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(39, 13);
			this->label32->TabIndex = 10;
			this->label32->Text = L"numer:";
			// 
			// txtKUlica
			// 
			this->txtKUlica->Location = System::Drawing::Point(282, 37);
			this->txtKUlica->Name = L"txtKUlica";
			this->txtKUlica->Size = System::Drawing::Size(100, 20);
			this->txtKUlica->TabIndex = 9;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(204, 40);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(32, 13);
			this->label33->TabIndex = 8;
			this->label33->Text = L"ulica:";
			// 
			// txtKTelefon
			// 
			this->txtKTelefon->Location = System::Drawing::Point(74, 115);
			this->txtKTelefon->Name = L"txtKTelefon";
			this->txtKTelefon->Size = System::Drawing::Size(100, 20);
			this->txtKTelefon->TabIndex = 7;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(15, 118);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(39, 13);
			this->label29->TabIndex = 6;
			this->label29->Text = L"telefon";
			// 
			// txtKEmail
			// 
			this->txtKEmail->Location = System::Drawing::Point(74, 89);
			this->txtKEmail->Name = L"txtKEmail";
			this->txtKEmail->Size = System::Drawing::Size(100, 20);
			this->txtKEmail->TabIndex = 5;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(15, 92);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"email:";
			// 
			// txtKNazwisko
			// 
			this->txtKNazwisko->Location = System::Drawing::Point(74, 63);
			this->txtKNazwisko->Name = L"txtKNazwisko";
			this->txtKNazwisko->Size = System::Drawing::Size(100, 20);
			this->txtKNazwisko->TabIndex = 3;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(15, 66);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(56, 13);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Nazwisko:";
			// 
			// txtKImie
			// 
			this->txtKImie->Location = System::Drawing::Point(74, 37);
			this->txtKImie->Name = L"txtKImie";
			this->txtKImie->Size = System::Drawing::Size(100, 20);
			this->txtKImie->TabIndex = 1;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(15, 40);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(29, 13);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Imię:";
			// 
			// btnKModyfikuj
			// 
			this->btnKModyfikuj->Location = System::Drawing::Point(208, 493);
			this->btnKModyfikuj->Name = L"btnKModyfikuj";
			this->btnKModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnKModyfikuj->TabIndex = 17;
			this->btnKModyfikuj->Text = L"modyfikuj";
			this->btnKModyfikuj->UseVisualStyleBackColor = true;
			this->btnKModyfikuj->Visible = false;
			this->btnKModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnKModyfikuj_Click);
			// 
			// dgKlienci
			// 
			this->dgKlienci->AllowUserToAddRows = false;
			this->dgKlienci->AllowUserToOrderColumns = true;
			this->dgKlienci->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgKlienci->Location = System::Drawing::Point(26, 84);
			this->dgKlienci->Name = L"dgKlienci";
			this->dgKlienci->Size = System::Drawing::Size(744, 192);
			this->dgKlienci->TabIndex = 3;
			this->dgKlienci->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgKlienci_CellClick);
			// 
			// btnKUsun
			// 
			this->btnKUsun->Location = System::Drawing::Point(103, 493);
			this->btnKUsun->Name = L"btnKUsun";
			this->btnKUsun->Size = System::Drawing::Size(75, 23);
			this->btnKUsun->TabIndex = 16;
			this->btnKUsun->Text = L"usuń";
			this->btnKUsun->UseVisualStyleBackColor = true;
			this->btnKUsun->Visible = false;
			this->btnKUsun->Click += gcnew System::EventHandler(this, &Program::btnKUsun_Click);
			// 
			// btnKSzukaj
			// 
			this->btnKSzukaj->Location = System::Drawing::Point(229, 30);
			this->btnKSzukaj->Name = L"btnKSzukaj";
			this->btnKSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnKSzukaj->TabIndex = 2;
			this->btnKSzukaj->Text = L"Szukaj";
			this->btnKSzukaj->UseVisualStyleBackColor = true;
			this->btnKSzukaj->Click += gcnew System::EventHandler(this, &Program::btnKSzukaj_Click);
			// 
			// txtKSzukaj
			// 
			this->txtKSzukaj->Location = System::Drawing::Point(86, 33);
			this->txtKSzukaj->Name = L"txtKSzukaj";
			this->txtKSzukaj->Size = System::Drawing::Size(137, 20);
			this->txtKSzukaj->TabIndex = 1;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(44, 36);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(36, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Klient:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->txtPUNazwisko);
			this->tabPage4->Controls->Add(this->txtPUImie);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->dgPUUslugiNowe);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->dgPUUslugi);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->dgPUPracownik);
			this->tabPage4->Controls->Add(this->txtPUSzukaj);
			this->tabPage4->Controls->Add(this->btnPUSzukaj);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Location = System::Drawing::Point(4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(795, 532);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Pracownik-Usługi";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// txtPUNazwisko
			// 
			this->txtPUNazwisko->Location = System::Drawing::Point(81, 116);
			this->txtPUNazwisko->Name = L"txtPUNazwisko";
			this->txtPUNazwisko->Size = System::Drawing::Size(100, 20);
			this->txtPUNazwisko->TabIndex = 12;
			// 
			// txtPUImie
			// 
			this->txtPUImie->Location = System::Drawing::Point(81, 87);
			this->txtPUImie->Name = L"txtPUImie";
			this->txtPUImie->Size = System::Drawing::Size(100, 20);
			this->txtPUImie->TabIndex = 11;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(24, 116);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(56, 13);
			this->label24->TabIndex = 10;
			this->label24->Text = L"Nazwisko:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(24, 90);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(29, 13);
			this->label23->TabIndex = 9;
			this->label23->Text = L"Imię:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(24, 228);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(74, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Dodaj usługę:";
			// 
			// dgPUUslugiNowe
			// 
			this->dgPUUslugiNowe->AllowUserToAddRows = false;
			this->dgPUUslugiNowe->AllowUserToOrderColumns = true;
			this->dgPUUslugiNowe->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUUslugiNowe->Location = System::Drawing::Point(27, 249);
			this->dgPUUslugiNowe->Name = L"dgPUUslugiNowe";
			this->dgPUUslugiNowe->Size = System::Drawing::Size(360, 162);
			this->dgPUUslugiNowe->TabIndex = 7;
			this->dgPUUslugiNowe->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::gdPUUslugiNowe_CellClick);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(402, 228);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(107, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Wykonywane usługi:";
			// 
			// dgPUUslugi
			// 
			this->dgPUUslugi->AllowUserToAddRows = false;
			this->dgPUUslugi->AllowUserToOrderColumns = true;
			this->dgPUUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUUslugi->Location = System::Drawing::Point(405, 249);
			this->dgPUUslugi->Name = L"dgPUUslugi";
			this->dgPUUslugi->Size = System::Drawing::Size(360, 162);
			this->dgPUUslugi->TabIndex = 5;
			this->dgPUUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUUslugi_CellClick);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(402, 24);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(65, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Procownicy:";
			// 
			// dgPUPracownik
			// 
			this->dgPUPracownik->AllowUserToAddRows = false;
			this->dgPUPracownik->AllowUserToOrderColumns = true;
			this->dgPUPracownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgPUPracownik->Location = System::Drawing::Point(405, 45);
			this->dgPUPracownik->Name = L"dgPUPracownik";
			this->dgPUPracownik->Size = System::Drawing::Size(360, 162);
			this->dgPUPracownik->TabIndex = 3;
			this->dgPUPracownik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgPUPracownik_CellClick);
			// 
			// txtPUSzukaj
			// 
			this->txtPUSzukaj->Location = System::Drawing::Point(90, 36);
			this->txtPUSzukaj->Name = L"txtPUSzukaj";
			this->txtPUSzukaj->Size = System::Drawing::Size(100, 20);
			this->txtPUSzukaj->TabIndex = 2;
			// 
			// btnPUSzukaj
			// 
			this->btnPUSzukaj->Location = System::Drawing::Point(196, 34);
			this->btnPUSzukaj->Name = L"btnPUSzukaj";
			this->btnPUSzukaj->Size = System::Drawing::Size(75, 23);
			this->btnPUSzukaj->TabIndex = 1;
			this->btnPUSzukaj->Text = L"Szukaj";
			this->btnPUSzukaj->UseVisualStyleBackColor = true;
			this->btnPUSzukaj->Click += gcnew System::EventHandler(this, &Program::btnPUSzukaj_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(24, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Pracownik:";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->btnUDodaj);
			this->tabPage3->Controls->Add(this->btnUUsun);
			this->tabPage3->Controls->Add(this->btnUModyfikuj);
			this->tabPage3->Controls->Add(this->gbUslugi);
			this->tabPage3->Controls->Add(this->dgUslugi);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->txtUSzukaj);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(795, 532);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Usuługi";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// btnUDodaj
			// 
			this->btnUDodaj->Location = System::Drawing::Point(301, 430);
			this->btnUDodaj->Name = L"btnUDodaj";
			this->btnUDodaj->Size = System::Drawing::Size(75, 23);
			this->btnUDodaj->TabIndex = 11;
			this->btnUDodaj->Text = L"Dodaj";
			this->btnUDodaj->UseVisualStyleBackColor = true;
			this->btnUDodaj->Click += gcnew System::EventHandler(this, &Program::btnUDodaj_Click);
			// 
			// btnUUsun
			// 
			this->btnUUsun->Enabled = false;
			this->btnUUsun->Location = System::Drawing::Point(14, 430);
			this->btnUUsun->Name = L"btnUUsun";
			this->btnUUsun->Size = System::Drawing::Size(75, 23);
			this->btnUUsun->TabIndex = 10;
			this->btnUUsun->Text = L"Usuń";
			this->btnUUsun->UseVisualStyleBackColor = true;
			this->btnUUsun->Click += gcnew System::EventHandler(this, &Program::btnUUsun_Click);
			// 
			// btnUModyfikuj
			// 
			this->btnUModyfikuj->Enabled = false;
			this->btnUModyfikuj->Location = System::Drawing::Point(157, 430);
			this->btnUModyfikuj->Name = L"btnUModyfikuj";
			this->btnUModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnUModyfikuj->TabIndex = 9;
			this->btnUModyfikuj->Text = L"Modyfikuj";
			this->btnUModyfikuj->UseVisualStyleBackColor = true;
			this->btnUModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnUModyfikuj_Click);
			// 
			// gbUslugi
			// 
			this->gbUslugi->Controls->Add(this->txtUOpis);
			this->gbUslugi->Controls->Add(this->txtUCzas);
			this->gbUslugi->Controls->Add(this->txtUCena);
			this->gbUslugi->Controls->Add(this->txtUNazwa);
			this->gbUslugi->Controls->Add(this->label18);
			this->gbUslugi->Controls->Add(this->label17);
			this->gbUslugi->Controls->Add(this->label16);
			this->gbUslugi->Controls->Add(this->label15);
			this->gbUslugi->Location = System::Drawing::Point(14, 74);
			this->gbUslugi->Name = L"gbUslugi";
			this->gbUslugi->Size = System::Drawing::Size(362, 340);
			this->gbUslugi->TabIndex = 4;
			this->gbUslugi->TabStop = false;
			this->gbUslugi->Text = L"Zabiegi";
			// 
			// txtUOpis
			// 
			this->txtUOpis->Location = System::Drawing::Point(57, 116);
			this->txtUOpis->Multiline = true;
			this->txtUOpis->Name = L"txtUOpis";
			this->txtUOpis->Size = System::Drawing::Size(190, 104);
			this->txtUOpis->TabIndex = 7;
			// 
			// txtUCzas
			// 
			this->txtUCzas->Location = System::Drawing::Point(57, 90);
			this->txtUCzas->Name = L"txtUCzas";
			this->txtUCzas->Size = System::Drawing::Size(60, 20);
			this->txtUCzas->TabIndex = 6;
			// 
			// txtUCena
			// 
			this->txtUCena->Location = System::Drawing::Point(57, 64);
			this->txtUCena->Name = L"txtUCena";
			this->txtUCena->Size = System::Drawing::Size(60, 20);
			this->txtUCena->TabIndex = 5;
			// 
			// txtUNazwa
			// 
			this->txtUNazwa->Location = System::Drawing::Point(57, 38);
			this->txtUNazwa->Name = L"txtUNazwa";
			this->txtUNazwa->Size = System::Drawing::Size(190, 20);
			this->txtUNazwa->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(27, 119);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(31, 13);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Opis:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(25, 93);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Czas:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(23, 67);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 13);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Cena:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(15, 41);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Nazwa:";
			// 
			// dgUslugi
			// 
			this->dgUslugi->AllowUserToAddRows = false;
			this->dgUslugi->AllowUserToOrderColumns = true;
			this->dgUslugi->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUslugi->Location = System::Drawing::Point(395, 6);
			this->dgUslugi->Name = L"dgUslugi";
			this->dgUslugi->Size = System::Drawing::Size(394, 520);
			this->dgUslugi->TabIndex = 3;
			this->dgUslugi->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUslugi_CellClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(274, 21);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Szukaj";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Program::button5_Click);
			// 
			// txtUSzukaj
			// 
			this->txtUSzukaj->Location = System::Drawing::Point(71, 23);
			this->txtUSzukaj->Name = L"txtUSzukaj";
			this->txtUSzukaj->Size = System::Drawing::Size(190, 20);
			this->txtUSzukaj->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(29, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Zabieg:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gbGodziny);
			this->tabPage2->Controls->Add(this->btnPDodaj);
			this->tabPage2->Controls->Add(this->btnPModyfikuj);
			this->tabPage2->Controls->Add(this->btnPUsun);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->btnPSzukaj);
			this->tabPage2->Controls->Add(this->txtPSzukaj);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->dgUzytkownicy);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(795, 532);
			this->tabPage2->TabIndex = 0;
			this->tabPage2->Text = L"Pracownicy";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// gbGodziny
			// 
			this->gbGodziny->Controls->Add(this->groupBox4);
			this->gbGodziny->Controls->Add(this->txtP6k);
			this->gbGodziny->Controls->Add(this->txtP6p);
			this->gbGodziny->Controls->Add(this->label13);
			this->gbGodziny->Controls->Add(this->txtP5k);
			this->gbGodziny->Controls->Add(this->txtP5p);
			this->gbGodziny->Controls->Add(this->label12);
			this->gbGodziny->Controls->Add(this->txtP4k);
			this->gbGodziny->Controls->Add(this->txtP4p);
			this->gbGodziny->Controls->Add(this->label11);
			this->gbGodziny->Controls->Add(this->txtP3k);
			this->gbGodziny->Controls->Add(this->txtP3p);
			this->gbGodziny->Controls->Add(this->label10);
			this->gbGodziny->Controls->Add(this->txtP2k);
			this->gbGodziny->Controls->Add(this->txtP2p);
			this->gbGodziny->Controls->Add(this->label9);
			this->gbGodziny->Controls->Add(this->txtP1k);
			this->gbGodziny->Controls->Add(this->txtP1p);
			this->gbGodziny->Controls->Add(this->label8);
			this->gbGodziny->Location = System::Drawing::Point(37, 192);
			this->gbGodziny->Name = L"gbGodziny";
			this->gbGodziny->Size = System::Drawing::Size(304, 294);
			this->gbGodziny->TabIndex = 8;
			this->gbGodziny->TabStop = false;
			this->gbGodziny->Text = L"Godziny pracy";
			this->gbGodziny->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Location = System::Drawing::Point(211, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(76, 154);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Szablony";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(17, 111);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(46, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10-18";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Program::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(46, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9-17";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Program::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8-16";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7-15";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// txtP6k
			// 
			this->txtP6k->Location = System::Drawing::Point(149, 153);
			this->txtP6k->Name = L"txtP6k";
			this->txtP6k->Size = System::Drawing::Size(56, 20);
			this->txtP6k->TabIndex = 17;
			// 
			// txtP6p
			// 
			this->txtP6p->Location = System::Drawing::Point(80, 153);
			this->txtP6p->Name = L"txtP6p";
			this->txtP6p->Size = System::Drawing::Size(54, 20);
			this->txtP6p->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(39, 156);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Sobota";
			// 
			// txtP5k
			// 
			this->txtP5k->Location = System::Drawing::Point(149, 127);
			this->txtP5k->Name = L"txtP5k";
			this->txtP5k->Size = System::Drawing::Size(56, 20);
			this->txtP5k->TabIndex = 14;
			// 
			// txtP5p
			// 
			this->txtP5p->Location = System::Drawing::Point(80, 127);
			this->txtP5p->Name = L"txtP5p";
			this->txtP5p->Size = System::Drawing::Size(54, 20);
			this->txtP5p->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(43, 130);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Piątek";
			// 
			// txtP4k
			// 
			this->txtP4k->Location = System::Drawing::Point(149, 101);
			this->txtP4k->Name = L"txtP4k";
			this->txtP4k->Size = System::Drawing::Size(56, 20);
			this->txtP4k->TabIndex = 11;
			// 
			// txtP4p
			// 
			this->txtP4p->Location = System::Drawing::Point(80, 101);
			this->txtP4p->Name = L"txtP4p";
			this->txtP4p->Size = System::Drawing::Size(54, 20);
			this->txtP4p->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(29, 104);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Czwartek";
			// 
			// txtP3k
			// 
			this->txtP3k->Location = System::Drawing::Point(149, 75);
			this->txtP3k->Name = L"txtP3k";
			this->txtP3k->Size = System::Drawing::Size(56, 20);
			this->txtP3k->TabIndex = 8;
			// 
			// txtP3p
			// 
			this->txtP3p->Location = System::Drawing::Point(80, 75);
			this->txtP3p->Name = L"txtP3p";
			this->txtP3p->Size = System::Drawing::Size(54, 20);
			this->txtP3p->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(45, 78);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Środa";
			// 
			// txtP2k
			// 
			this->txtP2k->Location = System::Drawing::Point(149, 49);
			this->txtP2k->Name = L"txtP2k";
			this->txtP2k->Size = System::Drawing::Size(56, 20);
			this->txtP2k->TabIndex = 5;
			// 
			// txtP2p
			// 
			this->txtP2p->Location = System::Drawing::Point(80, 49);
			this->txtP2p->Name = L"txtP2p";
			this->txtP2p->Size = System::Drawing::Size(54, 20);
			this->txtP2p->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Wtorek";
			// 
			// txtP1k
			// 
			this->txtP1k->Location = System::Drawing::Point(149, 23);
			this->txtP1k->Name = L"txtP1k";
			this->txtP1k->Size = System::Drawing::Size(56, 20);
			this->txtP1k->TabIndex = 2;
			// 
			// txtP1p
			// 
			this->txtP1p->Location = System::Drawing::Point(80, 23);
			this->txtP1p->Name = L"txtP1p";
			this->txtP1p->Size = System::Drawing::Size(54, 20);
			this->txtP1p->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Poniedziałek";
			// 
			// btnPDodaj
			// 
			this->btnPDodaj->Location = System::Drawing::Point(265, 492);
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
			this->btnPModyfikuj->Location = System::Drawing::Point(151, 492);
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
			this->btnPUsun->Location = System::Drawing::Point(37, 492);
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
			this->groupBox2->Location = System::Drawing::Point(37, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(304, 120);
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
			this->chbPPracownik->CheckedChanged += gcnew System::EventHandler(this, &Program::chbPPracownik_CheckedChanged);
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
			this->dgUzytkownicy->Size = System::Drawing::Size(420, 496);
			this->dgUzytkownicy->TabIndex = 0;
			this->dgUzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUzytkownicy_CellClick);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(795, 532);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Zmiana hasła";
			this->tabPage1->UseVisualStyleBackColor = true;
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
			this->ClientSize = System::Drawing::Size(871, 632);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->gbKlienci->ResumeLayout(false);
			this->gbKlienci->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKlienci))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugiNowe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUUslugi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgPUPracownik))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->gbUslugi->ResumeLayout(false);
			this->gbUslugi->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUslugi))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->gbGodziny->ResumeLayout(false);
			this->gbGodziny->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownicy))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//edklaracja zmiennych
		int id_rekordu; //wybranie rekordu na którym pracuję - zmienna dla wszystkich siatek
		int pracownik_typ;
		int id_usluga; //wybranie uslugi

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
			laczBaze->Open();
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
	private: void szukaj_pracownikow(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa as login, pracownik FROM uzytkownik where concat(uzytkownik_nazwa, imie,' ', nazwisko) like '%" + pole->Text + "%' order by nazwisko", laczBaze);
		try
		{
			laczBaze->Open();
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			siatka->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
	}

	private: System::Void btnPSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
		szukaj_pracownikow(txtPSzukaj, dgUzytkownicy);
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
			//odczyt i wyswietlenie godzin
			if (chbPPracownik->Checked) {
				MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * from godziny where uzytkownik_id=" + id_rekordu + "", laczBaze);
				MySqlDataReader^ dane;
				try
				{
					laczBaze->Open();
					dane = zapytanie->ExecuteReader();
					while (dane->Read())
					{
						txtP1p->Text = dane->GetString("pon_od");
						txtP1k->Text = dane->GetString("pon_do");

						txtP2p->Text = dane->GetString("wt_od");
						txtP2k->Text = dane->GetString("wt_do");

						txtP3p->Text = dane->GetString("sr_od");
						txtP3k->Text = dane->GetString("sr_do");

						txtP4p->Text = dane->GetString("cz_od");
						txtP4k->Text = dane->GetString("cz_do");

						txtP5p->Text = dane->GetString("pt_od");
						txtP5k->Text = dane->GetString("pt_do");

						txtP6p->Text = dane->GetString("so_od");
						txtP6k->Text = dane->GetString("so_do");

					}
					laczBaze->Close();
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
				}
			}

		}
	}
	private: System::Void btnPDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
		//dodawanie uzytkownikow do bazy
		powodzenie = false;
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
				//INSERT INTO UZYTKOWNIK
				polecenie->CommandText = "insert into uzytkownik set imie='" + txtPImie->Text + "', nazwisko='" + txtPNazwisko->Text + "', uzytkownik_nazwa = '" + txtPLogin->Text + "', haslo = password('" + txtPLogin->Text + "'), pracownik = " + pracownik_typ + "";
				polecenie->ExecuteNonQuery();
				//INSERT INTO GODZINY
				if (chbPPracownik->Checked) {
					polecenie->CommandText = "insert into godziny set uzytkownik_id=last_insert_id(), pon_od = '" + txtP1p->Text + "', pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od = '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', cz_od = '" + txtP4p->Text + "', cz_do = '" + txtP4k->Text + "', pt_od = '" + txtP5p->Text + "', pt_do = '" + txtP5k->Text + "', so_od = '" + txtP6p->Text + "', so_do = '" + txtP6k->Text + "'";
					polecenie->ExecuteNonQuery();
				}
				transakcja->Commit();
				powodzenie = true;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczBaze->Close();

		}
		pokaz_siatke();
		if (powodzenie)MessageBox::Show("Użytkownik został Dodany");
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
		powodzenie = false;
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
				polecenie->CommandText = "select * from godziny where uzytkownik_id=" + id_rekordu + "";
				MySqlDataReader^ wynik = polecenie->ExecuteReader();
				bool maGodziny = wynik->HasRows;
				wynik->Close();

				polecenie->CommandText = "update uzytkownik set imie='" + txtPImie->Text + "', nazwisko='" + txtPNazwisko->Text + "', uzytkownik_nazwa = '" + txtPLogin->Text + "', pracownik = " + pracownik_typ + " where uzytkownik_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				if (maGodziny && chbPPracownik->Checked) {
					//MessageBox::Show("update");
					polecenie->CommandText = "update godziny set pon_od = '" + txtP1p->Text + "', pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od = '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', cz_od = '" + txtP4p->Text + "', cz_do = '" + txtP4k->Text + "', pt_od = '" + txtP5p->Text + "', pt_do = '" + txtP5k->Text + "', so_od = '" + txtP6p->Text + "', so_do = '" + txtP6k->Text + "' where uzytkownik_id=" + id_rekordu + "";
					polecenie->ExecuteNonQuery();
				}
				else if (chbPPracownik->Checked) {
					//MessageBox::Show("insert");
					polecenie->CommandText = "insert into godziny set uzytkownik_id=" + id_rekordu + ", pon_od = '" + txtP1p->Text + "', pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od = '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', cz_od = '" + txtP4p->Text + "', cz_do = '" + txtP4k->Text + "', pt_od = '" + txtP5p->Text + "', pt_do = '" + txtP5k->Text + "', so_od = '" + txtP6p->Text + "', so_do = '" + txtP6k->Text + "'";
					polecenie->ExecuteNonQuery();
				}
				wynik->Close();
				transakcja->Commit();
				powodzenie = true;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczBaze->Close();

		}
		pokaz_siatke();
		if (powodzenie)MessageBox::Show("Dane uzytkownika zostały zmodyfikowane");
	}
	private: Void wyczysc(Control^ zbior) {
		for each(Control^ element in zbior->Controls) {
			if (element->GetType() == TextBox::typeid || element->GetType()==MaskedTextBox::typeid) {
				element->Text = "";
			}
		}
	}

	private: System::Void btnPUsun_Click(System::Object^  sender, System::EventArgs^  e) {
		//usuniecie uzytkownika
		powodzenie = false;
		if (id_rekordu == 1) {
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
				if (MessageBox::Show("Czy usunąć użytkownika?", "UWAGA!!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
					//usunięcie godziń
					polecenie->CommandText = "delete from godziny where uzytkownik_id = " + id_rekordu + "; ";
					polecenie->ExecuteNonQuery();
					//usunięcie użytkownika
					polecenie->CommandText = "delete from uzytkownik where uzytkownik_id = " + id_rekordu + "; ";
					polecenie->ExecuteNonQuery();

					transakcja->Commit();
					powodzenie = true;
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
		if (powodzenie)MessageBox::Show("Użytkownik został usunięty");
	}
	private: System::Void chbPPracownik_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (chbPPracownik->Checked)	gbGodziny->Visible = true;
		else gbGodziny->Visible = false;
		wyczysc(gbGodziny);
	}
			 //szablony godzin-------
	private: void czas_pracy(int czasStart) {
		array<TextBox^> ^ czas_start = { txtP1p, txtP2p, txtP3p ,txtP4p ,txtP5p ,txtP6p };
		array<TextBox^> ^ czas_stop = { txtP1k, txtP2k, txtP3k ,txtP4k ,txtP5k ,txtP6k };
		for (int i = 0; i <= 5; i++) {
			czas_start[i]->Text = czasStart + ":00";
			czas_stop[i]->Text = czasStart + 8 + ":00";
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		czas_pracy(7);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		czas_pracy(8);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		czas_pracy(9);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		czas_pracy(10);
	}
			 //----------------------
	private: void pokaz_uslugi(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * from uslugi where nazwa like '%" + pole->Text
			+ "%'  order by nazwa", laczBaze);
		try
		{
			laczBaze->Open();
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			siatka->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}

		siatka->Columns[0]->Visible = false;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		pokaz_uslugi(txtUSzukaj, dgUslugi);
	}

	private: System::Void btnUDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
		//dodawanie usług do bazy
		powodzenie = false;
		if (txtUNazwa->Text->Length < 2 || txtUCena->Text->Length < 1 || txtUCzas->Text->Length < 1) {
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
				//INSERT INTO USLUGI
				String^ cena = txtUCena->Text->Replace(",", ".");
				polecenie->CommandText = "insert into uslugi set nazwa= '" + txtUNazwa->Text + "', cena= '" + cena + "', czas= '" + txtUCzas->Text + "', opis= '" + txtUOpis->Text + "'";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				powodzenie = true;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
			}
			laczBaze->Close();
		}
		pokaz_uslugi(txtUSzukaj, dgUslugi);
		if (powodzenie)MessageBox::Show("Usługa została dodana");
	}
	private: System::Void dgUslugi_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		//wybranie usługi
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToInt32(dgUslugi->Rows[e->RowIndex]->Cells[0]->Value);
			txtUNazwa->Text = dgUslugi->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
			txtUCena->Text = dgUslugi->Rows[e->RowIndex]->Cells["cena"]->Value->ToString();
			txtUCzas->Text = dgUslugi->Rows[e->RowIndex]->Cells["czas"]->Value->ToString();
			txtUOpis->Text = dgUslugi->Rows[e->RowIndex]->Cells["opis"]->Value->ToString();

			this->btnUModyfikuj->Enabled = true;
			this->btnUUsun->Enabled = true;

		}
	}
	private: System::Void btnUModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
		//modyfikacja uslugi
		powodzenie = false;
		if (txtUNazwa->Text->Length < 2 || txtUCena->Text->Length < 1 || txtUCzas->Text->Length < 1) {
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
				String^ cena = txtUCena->Text->Replace(",", ".");
				polecenie->CommandText = "update uslugi set nazwa='" + txtUNazwa->Text + "', cena='" + cena + "', czas = '" + txtUCzas->Text + "', opis = '" + txtUOpis->Text + "' where uslugi_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				powodzenie = true;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();
			}
			laczBaze->Close();
		}
		pokaz_uslugi(txtUSzukaj, dgUslugi);
		if (powodzenie)MessageBox::Show("Informacje o usłudze zostały zmodyfikowane");
	}
	private: System::Void btnUUsun_Click(System::Object^  sender, System::EventArgs^  e) {
		//usuniecie uslugi
		powodzenie = false;
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;
		try {
			if (MessageBox::Show("Czy na pewno chcesz usunąć wybraną usługę?", "UWAGA!!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				polecenie->CommandText = "delete from uslugi where uslugi_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				transakcja->Commit();
				powodzenie = true;
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_uslugi(txtUSzukaj, dgUslugi);
		wyczysc(gbUslugi);
		if (powodzenie)MessageBox::Show("Usługa została usunięta");
	}

			 //konczonce klamry
	private: System::Void btnPUSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
		szukaj_pracownikow(txtPUSzukaj, dgPUPracownik);
		dgPUPracownik->Columns[0]->Visible = false;
	}

	private: void pokaz_uslugi() {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uslugi.uslugi_id, uslugi.nazwa, uslugi.cena, uslugi.czas from uslugi, uzytkownik_usluga where uslugi.uslugi_id = uzytkownik_usluga.uslugi_id and uzytkownik_usluga.uzytkownik_id = " + id_rekordu + " order by nazwa;", laczBaze);
		try
		{
			laczBaze->Open();
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			dgPUUslugi->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
		dgPUUslugi->Columns[0]->Visible = false;
	}

	private: System::Void dgPUPracownik_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		//Wyszukanie uslug ktore wykonuje pracownik
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToInt32(dgPUPracownik->Rows[e->RowIndex]->Cells[0]->Value);
			txtPUImie->Text = dgPUPracownik->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txtPUNazwisko->Text = dgPUPracownik->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();

			pokaz_uslugi();

			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * from uslugi order by nazwa;", laczBaze);
			try
			{
				laczBaze->Open();
				MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
				moja->SelectCommand = zapytanie;
				DataTable^ tabela = gcnew DataTable();
				moja->Fill(tabela);

				BindingSource^ zrodlo = gcnew BindingSource();
				zrodlo->DataSource = tabela;
				dgPUUslugiNowe->DataSource = zrodlo;
				laczBaze->Close();
				dgPUUslugiNowe->Columns[0]->Visible = false;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
			}

		}
	}
	private: System::Void gdPUUslugiNowe_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		//Dodanie nowej usługi do usług wykonywanych przez pracownika
		if (e->RowIndex >= 0) {
			id_usluga = Convert::ToInt32(dgPUUslugiNowe->Rows[e->RowIndex]->Cells[0]->Value);

			if (MessageBox::Show("Czy chcesz dodać nową usługę pracownikowi?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

				MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				MySqlCommand^ polecenie = laczBaze->CreateCommand();
				MySqlTransaction^ transakcja;
				laczBaze->Open();
				transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie->Connection = laczBaze;
				polecenie->Transaction = transakcja;
				try {

					polecenie->CommandText = "insert into uzytkownik_usluga set uzytkownik_id = " + id_rekordu + ", uslugi_id=" + id_usluga + "; ";
					polecenie->ExecuteNonQuery();
					transakcja->Commit();
					powodzenie = true;
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
					transakcja->Rollback();
				}
				laczBaze->Close();
				pokaz_uslugi();
				if (powodzenie)MessageBox::Show("Usługa została przypisana do usług pracownika");

			}
		}
	}
	private: System::Void dgPUUslugi_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		//Usuwanie usługi z listy wykonywanych uslug przez pracownika
		if (e->RowIndex >= 0) {
			id_usluga = Convert::ToInt32(dgPUUslugi->Rows[e->RowIndex]->Cells[0]->Value);

			if (MessageBox::Show("Czy chcesz usunąć usługę pracownikowi?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

				MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
				MySqlCommand^ polecenie = laczBaze->CreateCommand();
				MySqlTransaction^ transakcja;
				laczBaze->Open();
				transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
				polecenie->Connection = laczBaze;
				polecenie->Transaction = transakcja;
				try {

					polecenie->CommandText = "delete from uzytkownik_usluga where uzytkownik_id = " + id_rekordu + " and uslugi_id=" + id_usluga + "; ";
					polecenie->ExecuteNonQuery();
					transakcja->Commit();
					powodzenie = true;
				}
				catch (Exception^ komunikat) {
					MessageBox::Show(komunikat->Message);
					transakcja->Rollback();
				}
				laczBaze->Close();
				pokaz_uslugi();
				if (powodzenie)MessageBox::Show("Usługa została usunięta z usług pracownika");

			}
		}
	}

	private: void szukaj_klientow(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM klienci where concat(imie,' ', nazwisko, ' ', miejscowosc) like '%" + pole->Text + "%' order by nazwisko", laczBaze);
		try
		{
			laczBaze->Open();
			MySqlDataAdapter^ moja = gcnew MySqlDataAdapter();
			moja->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			moja->Fill(tabela);

			BindingSource^ zrodlo = gcnew BindingSource();
			zrodlo->DataSource = tabela;
			siatka->DataSource = zrodlo;
			laczBaze->Close();
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
		}
	}

	private: System::Void btnKSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
		szukaj_klientow(txtKSzukaj, dgKlienci);
		dgKlienci->Columns[0]->Visible = false;
		dgKlienci->Columns["modyfikacja"]->Visible = false;

	}
	private: System::Void btnKDodaj_Click(System::Object^  sender, System::EventArgs^  e) {
		//dodawanie klienta do bazy
		powodzenie = false;
		if (txtKImie->Text->Length < 2 || txtKNazwisko->Text->Length < 2) {
			MessageBox::Show("uzupełnij dane!");
		}
		else {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

			polecenie->Connection = laczBaze;

			polecenie->Transaction = transakcja;
			try {
				//INSERT INTO KLIENCI
				polecenie->CommandText = "insert into klienci set imie='" + txtKImie->Text + "', nazwisko='" + txtKNazwisko->Text + "', email ='" + txtKEmail->Text + "', telefon ='" + txtKTelefon->Text + "',  ulica ='" + txtKUlica->Text + "', numer ='" + txtKNumer->Text + "', miejscowosc ='" + txtKMiejscowosc->Text + "', poczta ='" + txtKKod->Text + "' ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				powodzenie = true;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczBaze->Close();

		}
		szukaj_klientow(txtKSzukaj, dgKlienci);
		if (powodzenie)MessageBox::Show("Klient: " + txtKImie->Text + " " + txtKNazwisko->Text + " został Dodany");
	}
	private: System::Void dgKlienci_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		//Wybor klienta
		if (e->RowIndex >= 0) {
			id_rekordu = Convert::ToInt32(dgKlienci->Rows[e->RowIndex]->Cells[0]->Value);
			txtKImie->Text = dgKlienci->Rows[e->RowIndex]->Cells["imie"]->Value->ToString();
			txtKNazwisko->Text = dgKlienci->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
			txtKEmail->Text = dgKlienci->Rows[e->RowIndex]->Cells["email"]->Value->ToString();
			txtKTelefon->Text = dgKlienci->Rows[e->RowIndex]->Cells["telefon"]->Value->ToString();
			txtKUlica->Text = dgKlienci->Rows[e->RowIndex]->Cells["ulica"]->Value->ToString();
			txtKNumer->Text = dgKlienci->Rows[e->RowIndex]->Cells["numer"]->Value->ToString();
			txtKMiejscowosc->Text = dgKlienci->Rows[e->RowIndex]->Cells["miejscowosc"]->Value->ToString();
			txtKKod->Text = dgKlienci->Rows[e->RowIndex]->Cells["poczta"]->Value->ToString();

			btnKModyfikuj->Visible = true;
			btnKUsun->Visible = true;
		}
	}
	private: System::Void btnKModyfikuj_Click(System::Object^  sender, System::EventArgs^  e) {
		//modyfikacja danych klienta 
		powodzenie = false;
		if (txtKImie->Text->Length < 2 || txtKNazwisko->Text->Length < 2) {
			MessageBox::Show("uzupełnij dane!");
		}
		else {
			MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ polecenie = laczBaze->CreateCommand();
			MySqlTransaction^ transakcja;
			laczBaze->Open();
			transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

			polecenie->Connection = laczBaze;

			polecenie->Transaction = transakcja;
			try {

				polecenie->CommandText = "update klienci set imie='" + txtKImie->Text + "', nazwisko='" + txtKNazwisko->Text + "', email ='" + txtKEmail->Text + "', telefon ='" + txtKTelefon->Text + "',  ulica ='" + txtKUlica->Text + "', numer ='" + txtKNumer->Text + "', miejscowosc ='" + txtKMiejscowosc->Text + "', poczta ='" + txtKKod->Text + "' where klienci_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				powodzenie = true;
			}
			catch (Exception^ komunikat) {
				MessageBox::Show(komunikat->Message);
				transakcja->Rollback();

			}
			laczBaze->Close();

		}
		szukaj_klientow(txtKSzukaj, dgKlienci);
		if (powodzenie)MessageBox::Show("Dane klienta: " + txtKImie->Text + " " + txtKNazwisko->Text + " został pomyślnie zmodyfikowane");
	}
	private: System::Void btnKUsun_Click(System::Object^  sender, System::EventArgs^  e) {
		//usuwanie klienta 
		powodzenie = false;
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

		polecenie->Connection = laczBaze;

		polecenie->Transaction = transakcja;
		try {
			if (MessageBox::Show("Czy napewno mam usunąć klienta " + txtKImie->Text + " " + txtKNazwisko->Text +"?", "Uwaga!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
				polecenie->CommandText = "delete from klienci where klienci_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();

				transakcja->Commit();
				powodzenie = true;
			}
		}
		catch (Exception^ komunikat) {
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();

		}
		laczBaze->Close();

		wyczysc(gbKlienci);
		szukaj_klientow(txtKSzukaj, dgKlienci);
		if (powodzenie)MessageBox::Show("Klient: " + txtKImie->Text + " " + txtKNazwisko->Text + " został usunięty");
	}
	};
}