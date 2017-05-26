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
			this->gbGodziny->SuspendLayout();
			this->groupBox4->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(803, 558);
			this->tabControl1->TabIndex = 0;
			// 
			// s
			// 
			this->s->Controls->Add(this->gbGodziny);
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
			this->s->Size = System::Drawing::Size(795, 532);
			this->s->TabIndex = 0;
			this->s->Text = L"Pracownicy";
			this->s->UseVisualStyleBackColor = true;
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
			this->groupBox4->Location = System::Drawing::Point(193, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(94, 154);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Szablony";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 113);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"10-18";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Program::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9-17";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Program::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8-16";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Program::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7-15";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// txtP6k
			// 
			this->txtP6k->Location = System::Drawing::Point(131, 153);
			this->txtP6k->Name = L"txtP6k";
			this->txtP6k->Size = System::Drawing::Size(45, 20);
			this->txtP6k->TabIndex = 17;
			// 
			// txtP6p
			// 
			this->txtP6p->Location = System::Drawing::Point(80, 153);
			this->txtP6p->Name = L"txtP6p";
			this->txtP6p->Size = System::Drawing::Size(45, 20);
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
			this->txtP5k->Location = System::Drawing::Point(131, 127);
			this->txtP5k->Name = L"txtP5k";
			this->txtP5k->Size = System::Drawing::Size(45, 20);
			this->txtP5k->TabIndex = 14;
			// 
			// txtP5p
			// 
			this->txtP5p->Location = System::Drawing::Point(80, 127);
			this->txtP5p->Name = L"txtP5p";
			this->txtP5p->Size = System::Drawing::Size(45, 20);
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
			this->txtP4k->Location = System::Drawing::Point(131, 101);
			this->txtP4k->Name = L"txtP4k";
			this->txtP4k->Size = System::Drawing::Size(45, 20);
			this->txtP4k->TabIndex = 11;
			// 
			// txtP4p
			// 
			this->txtP4p->Location = System::Drawing::Point(80, 101);
			this->txtP4p->Name = L"txtP4p";
			this->txtP4p->Size = System::Drawing::Size(45, 20);
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
			this->txtP3k->Location = System::Drawing::Point(131, 75);
			this->txtP3k->Name = L"txtP3k";
			this->txtP3k->Size = System::Drawing::Size(45, 20);
			this->txtP3k->TabIndex = 8;
			// 
			// txtP3p
			// 
			this->txtP3p->Location = System::Drawing::Point(80, 75);
			this->txtP3p->Name = L"txtP3p";
			this->txtP3p->Size = System::Drawing::Size(45, 20);
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
			this->txtP2k->Location = System::Drawing::Point(131, 49);
			this->txtP2k->Name = L"txtP2k";
			this->txtP2k->Size = System::Drawing::Size(45, 20);
			this->txtP2k->TabIndex = 5;
			// 
			// txtP2p
			// 
			this->txtP2p->Location = System::Drawing::Point(80, 49);
			this->txtP2p->Name = L"txtP2p";
			this->txtP2p->Size = System::Drawing::Size(45, 20);
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
			this->txtP1k->Location = System::Drawing::Point(131, 23);
			this->txtP1k->Name = L"txtP1k";
			this->txtP1k->Size = System::Drawing::Size(45, 20);
			this->txtP1k->TabIndex = 2;
			// 
			// txtP1p
			// 
			this->txtP1p->Location = System::Drawing::Point(80, 23);
			this->txtP1p->Name = L"txtP1p";
			this->txtP1p->Size = System::Drawing::Size(45, 20);
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(795, 532);
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
			this->ClientSize = System::Drawing::Size(871, 632);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->s->ResumeLayout(false);
			this->s->PerformLayout();
			this->gbGodziny->ResumeLayout(false);
			this->gbGodziny->PerformLayout();
			this->groupBox4->ResumeLayout(false);
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
	private: System::Void btnPSzukaj_Click(System::Object^  sender, System::EventArgs^  e) {
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie, nazwisko, uzytkownik_nazwa as login, pracownik FROM uzytkownik where concat(uzytkownik_nazwa, imie,' ', nazwisko) like '%" + txtPSzukaj->Text + "%' order by nazwisko", laczBaze);
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
				MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * from godziny where uzytkownik_id="+id_rekordu+"", laczBaze);
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
				//INSERT INTO UZYTKOWNIK
				polecenie->CommandText = "insert into uzytkownik set imie='"+txtPImie->Text+"', nazwisko='"+txtPNazwisko->Text+"', uzytkownik_nazwa = '"+txtPLogin->Text+"', haslo = password('"+txtPLogin->Text+"'), pracownik = "+pracownik_typ+"";
				polecenie->ExecuteNonQuery();
				//INSERT INTO GODZINY
				if (chbPPracownik->Checked) {
					polecenie->CommandText = "insert into godziny set uzytkownik_id=last_insert_id(), pon_od = '" + txtP1p->Text + "', pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od = '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', cz_od = '" + txtP4p->Text + "', cz_do = '" + txtP4k->Text + "', pt_od = '" + txtP5p->Text + "', pt_do = '" + txtP5k->Text + "', so_od = '" + txtP6p->Text + "', so_do = '" + txtP6k->Text + "'";
					polecenie->ExecuteNonQuery();
				}
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
				polecenie->CommandText = "select * from godziny where uzytkownik_id=" + id_rekordu + "";
				MySqlDataReader^ wynik = polecenie->ExecuteReader();
				bool maGodziny = wynik->HasRows;
				wynik->Close();

				polecenie->CommandText = "update uzytkownik set imie='" + txtPImie->Text + "', nazwisko='" + txtPNazwisko->Text + "', uzytkownik_nazwa = '" + txtPLogin->Text + "', pracownik = " + pracownik_typ + " where uzytkownik_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				if (maGodziny && chbPPracownik->Checked){
					//MessageBox::Show("update");
					polecenie->CommandText = "update godziny set pon_od = '" + txtP1p->Text + "', pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od = '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', cz_od = '" + txtP4p->Text + "', cz_do = '" + txtP4k->Text + "', pt_od = '" + txtP5p->Text + "', pt_do = '" + txtP5k->Text + "', so_od = '" + txtP6p->Text + "', so_do = '" + txtP6k->Text + "' where uzytkownik_id="+id_rekordu+"";
					polecenie->ExecuteNonQuery();
				}
				else if(chbPPracownik->Checked) {
					//MessageBox::Show("insert");
					polecenie->CommandText = "insert into godziny set uzytkownik_id="+id_rekordu+", pon_od = '" + txtP1p->Text + "', pon_do = '" + txtP1k->Text + "', wt_od = '" + txtP2p->Text + "', wt_do = '" + txtP2k->Text + "', sr_od = '" + txtP3p->Text + "', sr_do = '" + txtP3k->Text + "', cz_od = '" + txtP4p->Text + "', cz_do = '" + txtP4k->Text + "', pt_od = '" + txtP5p->Text + "', pt_do = '" + txtP5k->Text + "', so_od = '" + txtP6p->Text + "', so_do = '" + txtP6k->Text + "'";
					polecenie->ExecuteNonQuery();
				}
				wynik->Close();
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
				//usunięcie godziń
				polecenie->CommandText = "delete from godziny where uzytkownik_id = " + id_rekordu + "; ";
				polecenie->ExecuteNonQuery();
				//usunięcie użytkownika
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
private: System::Void chbPPracownik_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chbPPracownik->Checked)	gbGodziny->Visible = true;
	else gbGodziny->Visible = false;
	wyczysc(gbGodziny);
}

private: void czas_pracy(int czasStart) {
		array<TextBox^> ^ czas_start = { txtP1p, txtP2p, txtP3p ,txtP4p ,txtP5p ,txtP6p };
		array<TextBox^> ^ czas_stop = { txtP1k, txtP2k, txtP3k ,txtP4k ,txtP5k ,txtP6k };
		for (int i = 0; i <= 5; i++) {
			czas_start[i]->Text = czasStart + ":00";
			czas_stop[i]->Text = czasStart+8 + ":00";
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
};
}