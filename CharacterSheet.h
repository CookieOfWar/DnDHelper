#pragma once

namespace DnDHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для CharacterSheet
	/// </summary>
	public ref class CharacterSheet : public System::Windows::Forms::Form
	{
	public:
		CharacterSheet(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CharacterSheet()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		bool inspiration = false;
		ImageList^ mptlist = gcnew ImageList();
		bool animforward = true;

	private:
		int strBon = 0, dexBon = 0, conBon = 0, intBon = 0, wisBon = 0, charBon = 0;
		int masterBonus;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ ClassCB;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ RaceCB;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ NameBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ LevelUpDown;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::NumericUpDown^ StrenghtUpDown;
	private: System::Windows::Forms::NumericUpDown^ LovkostUpDown;
	private: System::Windows::Forms::NumericUpDown^ teloslUpDown;
	private: System::Windows::Forms::NumericUpDown^ intelUpDown;
	private: System::Windows::Forms::NumericUpDown^ wisdomUpDown;
	private: System::Windows::Forms::NumericUpDown^ charismaUpDown;
	private: System::Windows::Forms::Label^ strenghtAdd;
	private: System::Windows::Forms::Label^ lovkostAdd;
	private: System::Windows::Forms::Label^ telosAdd;
	private: System::Windows::Forms::Label^ intelAdd;
	private: System::Windows::Forms::Label^ wisdomAdd;
	private: System::Windows::Forms::Label^ charismaAdd;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ MasterBonusText;
	private: System::Windows::Forms::CheckBox^ Athl;
	private: System::Windows::Forms::CheckBox^ Akr;
	private: System::Windows::Forms::CheckBox^ HandDex;
	private: System::Windows::Forms::CheckBox^ Stealth;
	private: System::Windows::Forms::CheckBox^ Analisys;
	private: System::Windows::Forms::CheckBox^ History;
	private: System::Windows::Forms::CheckBox^ Magic;
	private: System::Windows::Forms::CheckBox^ Nature;
	private: System::Windows::Forms::CheckBox^ Religic;
	private: System::Windows::Forms::CheckBox^ AnimCare;










	private: System::Windows::Forms::CheckBox^ Pronic;

	private: System::Windows::Forms::CheckBox^ Medic;

	private: System::Windows::Forms::CheckBox^ Surviv;

	private: System::Windows::Forms::CheckBox^ Attent;
	private: System::Windows::Forms::CheckBox^ ubejd;


	private: System::Windows::Forms::CheckBox^ lie;

	private: System::Windows::Forms::CheckBox^ zapug;

	private: System::Windows::Forms::CheckBox^ vistup;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ notesbutton;
	private: System::Windows::Forms::Timer^ showOrNotNotes;
	private: System::Windows::Forms::Button^ downloadButton;
	private: System::Windows::Forms::Button^ uploadButton;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ MaxHP;
	private: System::Windows::Forms::TextBox^ CurrentHP;
	private: System::Windows::Forms::TextBox^ TempHP;
	private: System::Windows::Forms::TextBox^ ArmorC;
	private: System::Windows::Forms::TextBox^ Initiative;
	private: System::Windows::Forms::CheckBox^ dG1;
	private: System::Windows::Forms::CheckBox^ dG2;
	private: System::Windows::Forms::CheckBox^ dG3;
private: System::Windows::Forms::CheckBox^ dB3;
private: System::Windows::Forms::CheckBox^ dB2;
private: System::Windows::Forms::CheckBox^ dB1;
private: System::Windows::Forms::TextBox^ copperC;
private: System::Windows::Forms::TextBox^ silverC;
private: System::Windows::Forms::TextBox^ goldC;
private: System::Windows::Forms::TextBox^ platinumC;
private: System::Windows::Forms::TextBox^ Notes;






































	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::PictureBox^ pictureBox1;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CharacterSheet::typeid));
			System::Windows::Forms::Label^ label12;
			System::Windows::Forms::Label^ label13;
			System::Windows::Forms::Label^ label14;
			System::Windows::Forms::Label^ label15;
			System::Windows::Forms::PictureBox^ pictureBox2;
			this->MaxHP = (gcnew System::Windows::Forms::TextBox());
			this->CurrentHP = (gcnew System::Windows::Forms::TextBox());
			this->TempHP = (gcnew System::Windows::Forms::TextBox());
			this->ArmorC = (gcnew System::Windows::Forms::TextBox());
			this->Initiative = (gcnew System::Windows::Forms::TextBox());
			this->dG1 = (gcnew System::Windows::Forms::CheckBox());
			this->dG2 = (gcnew System::Windows::Forms::CheckBox());
			this->dG3 = (gcnew System::Windows::Forms::CheckBox());
			this->dB3 = (gcnew System::Windows::Forms::CheckBox());
			this->dB2 = (gcnew System::Windows::Forms::CheckBox());
			this->dB1 = (gcnew System::Windows::Forms::CheckBox());
			this->copperC = (gcnew System::Windows::Forms::TextBox());
			this->silverC = (gcnew System::Windows::Forms::TextBox());
			this->goldC = (gcnew System::Windows::Forms::TextBox());
			this->platinumC = (gcnew System::Windows::Forms::TextBox());
			this->Notes = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ClassCB = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RaceCB = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->LevelUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->StrenghtUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->LovkostUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->teloslUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->intelUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->wisdomUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->charismaUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->strenghtAdd = (gcnew System::Windows::Forms::Label());
			this->lovkostAdd = (gcnew System::Windows::Forms::Label());
			this->telosAdd = (gcnew System::Windows::Forms::Label());
			this->intelAdd = (gcnew System::Windows::Forms::Label());
			this->wisdomAdd = (gcnew System::Windows::Forms::Label());
			this->charismaAdd = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MasterBonusText = (gcnew System::Windows::Forms::TextBox());
			this->Athl = (gcnew System::Windows::Forms::CheckBox());
			this->Akr = (gcnew System::Windows::Forms::CheckBox());
			this->HandDex = (gcnew System::Windows::Forms::CheckBox());
			this->Stealth = (gcnew System::Windows::Forms::CheckBox());
			this->Analisys = (gcnew System::Windows::Forms::CheckBox());
			this->History = (gcnew System::Windows::Forms::CheckBox());
			this->Magic = (gcnew System::Windows::Forms::CheckBox());
			this->Nature = (gcnew System::Windows::Forms::CheckBox());
			this->Religic = (gcnew System::Windows::Forms::CheckBox());
			this->AnimCare = (gcnew System::Windows::Forms::CheckBox());
			this->Pronic = (gcnew System::Windows::Forms::CheckBox());
			this->Medic = (gcnew System::Windows::Forms::CheckBox());
			this->Surviv = (gcnew System::Windows::Forms::CheckBox());
			this->Attent = (gcnew System::Windows::Forms::CheckBox());
			this->ubejd = (gcnew System::Windows::Forms::CheckBox());
			this->lie = (gcnew System::Windows::Forms::CheckBox());
			this->zapug = (gcnew System::Windows::Forms::CheckBox());
			this->vistup = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->notesbutton = (gcnew System::Windows::Forms::Button());
			this->showOrNotNotes = (gcnew System::Windows::Forms::Timer(this->components));
			this->downloadButton = (gcnew System::Windows::Forms::Button());
			this->uploadButton = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			label12 = (gcnew System::Windows::Forms::Label());
			label13 = (gcnew System::Windows::Forms::Label());
			label14 = (gcnew System::Windows::Forms::Label());
			label15 = (gcnew System::Windows::Forms::Label());
			pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LevelUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StrenghtUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LovkostUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teloslUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intelUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wisdomUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charismaUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			pictureBox1->Location = System::Drawing::Point(17, 179);
			pictureBox1->Name = L"pictureBox1";
			pictureBox1->Size = System::Drawing::Size(126, 601);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox1->TabIndex = 10;
			pictureBox1->TabStop = false;
			// 
			// label12
			// 
			label12->AutoSize = true;
			label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			label12->Location = System::Drawing::Point(272, 423);
			label12->Name = L"label12";
			label12->Size = System::Drawing::Size(135, 26);
			label12->TabIndex = 53;
			label12->Text = L"Инициатива";
			// 
			// label13
			// 
			label13->AutoSize = true;
			label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			label13->Location = System::Drawing::Point(333, 514);
			label13->Name = L"label13";
			label13->Size = System::Drawing::Size(241, 26);
			label13->TabIndex = 55;
			label13->Text = L"Спасброски от смерти";
			// 
			// label14
			// 
			label14->AutoSize = true;
			label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			label14->Location = System::Drawing::Point(338, 561);
			label14->Name = L"label14";
			label14->Size = System::Drawing::Size(61, 20);
			label14->TabIndex = 56;
			label14->Text = L"Успехи";
			// 
			// label15
			// 
			label15->AutoSize = true;
			label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			label15->Location = System::Drawing::Point(338, 599);
			label15->Name = L"label15";
			label15->Size = System::Drawing::Size(78, 20);
			label15->TabIndex = 57;
			label15->Text = L"Провалы";
			// 
			// pictureBox2
			// 
			pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			pictureBox2->Location = System::Drawing::Point(268, 699);
			pictureBox2->Name = L"pictureBox2";
			pictureBox2->Size = System::Drawing::Size(312, 96);
			pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBox2->TabIndex = 64;
			pictureBox2->TabStop = false;
			// 
			// MaxHP
			// 
			this->MaxHP->Location = System::Drawing::Point(347, 211);
			this->MaxHP->Name = L"MaxHP";
			this->MaxHP->Size = System::Drawing::Size(100, 20);
			this->MaxHP->TabIndex = 44;
			this->MaxHP->TabStop = false;
			this->MaxHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// CurrentHP
			// 
			this->CurrentHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CurrentHP->Location = System::Drawing::Point(347, 241);
			this->CurrentHP->Name = L"CurrentHP";
			this->CurrentHP->Size = System::Drawing::Size(100, 44);
			this->CurrentHP->TabIndex = 48;
			this->CurrentHP->TabStop = false;
			this->CurrentHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// TempHP
			// 
			this->TempHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TempHP->Location = System::Drawing::Point(346, 300);
			this->TempHP->Name = L"TempHP";
			this->TempHP->Size = System::Drawing::Size(100, 44);
			this->TempHP->TabIndex = 50;
			this->TempHP->TabStop = false;
			this->TempHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// ArmorC
			// 
			this->ArmorC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArmorC->Location = System::Drawing::Point(473, 226);
			this->ArmorC->Name = L"ArmorC";
			this->ArmorC->Size = System::Drawing::Size(100, 62);
			this->ArmorC->TabIndex = 52;
			this->ArmorC->TabStop = false;
			this->ArmorC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Initiative
			// 
			this->Initiative->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Initiative->Location = System::Drawing::Point(453, 410);
			this->Initiative->Name = L"Initiative";
			this->Initiative->Size = System::Drawing::Size(100, 62);
			this->Initiative->TabIndex = 54;
			this->Initiative->TabStop = false;
			this->Initiative->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dG1
			// 
			this->dG1->AutoSize = true;
			this->dG1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dG1->Location = System::Drawing::Point(443, 567);
			this->dG1->Name = L"dG1";
			this->dG1->Size = System::Drawing::Size(12, 11);
			this->dG1->TabIndex = 58;
			this->dG1->TabStop = false;
			this->dG1->UseVisualStyleBackColor = true;
			// 
			// dG2
			// 
			this->dG2->AutoSize = true;
			this->dG2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dG2->Location = System::Drawing::Point(473, 567);
			this->dG2->Name = L"dG2";
			this->dG2->Size = System::Drawing::Size(12, 11);
			this->dG2->TabIndex = 59;
			this->dG2->TabStop = false;
			this->dG2->UseVisualStyleBackColor = true;
			// 
			// dG3
			// 
			this->dG3->AutoSize = true;
			this->dG3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dG3->Location = System::Drawing::Point(503, 567);
			this->dG3->Name = L"dG3";
			this->dG3->Size = System::Drawing::Size(12, 11);
			this->dG3->TabIndex = 60;
			this->dG3->TabStop = false;
			this->dG3->UseVisualStyleBackColor = true;
			// 
			// dB3
			// 
			this->dB3->AutoSize = true;
			this->dB3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dB3->Location = System::Drawing::Point(503, 605);
			this->dB3->Name = L"dB3";
			this->dB3->Size = System::Drawing::Size(12, 11);
			this->dB3->TabIndex = 63;
			this->dB3->TabStop = false;
			this->dB3->UseVisualStyleBackColor = true;
			// 
			// dB2
			// 
			this->dB2->AutoSize = true;
			this->dB2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dB2->Location = System::Drawing::Point(473, 605);
			this->dB2->Name = L"dB2";
			this->dB2->Size = System::Drawing::Size(12, 11);
			this->dB2->TabIndex = 62;
			this->dB2->TabStop = false;
			this->dB2->UseVisualStyleBackColor = true;
			// 
			// dB1
			// 
			this->dB1->AutoSize = true;
			this->dB1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dB1->Location = System::Drawing::Point(443, 605);
			this->dB1->Name = L"dB1";
			this->dB1->Size = System::Drawing::Size(12, 11);
			this->dB1->TabIndex = 61;
			this->dB1->TabStop = false;
			this->dB1->UseVisualStyleBackColor = true;
			// 
			// copperC
			// 
			this->copperC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->copperC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->copperC->Location = System::Drawing::Point(291, 740);
			this->copperC->Name = L"copperC";
			this->copperC->Size = System::Drawing::Size(38, 25);
			this->copperC->TabIndex = 65;
			this->copperC->TabStop = false;
			this->copperC->Text = L"0";
			this->copperC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// silverC
			// 
			this->silverC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->silverC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->silverC->Location = System::Drawing::Point(366, 740);
			this->silverC->Name = L"silverC";
			this->silverC->Size = System::Drawing::Size(38, 25);
			this->silverC->TabIndex = 66;
			this->silverC->TabStop = false;
			this->silverC->Text = L"0";
			this->silverC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// goldC
			// 
			this->goldC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->goldC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->goldC->Location = System::Drawing::Point(443, 740);
			this->goldC->Name = L"goldC";
			this->goldC->Size = System::Drawing::Size(38, 25);
			this->goldC->TabIndex = 67;
			this->goldC->TabStop = false;
			this->goldC->Text = L"0";
			this->goldC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// platinumC
			// 
			this->platinumC->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->platinumC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->platinumC->Location = System::Drawing::Point(518, 739);
			this->platinumC->Name = L"platinumC";
			this->platinumC->Size = System::Drawing::Size(38, 25);
			this->platinumC->TabIndex = 68;
			this->platinumC->TabStop = false;
			this->platinumC->Text = L"0";
			this->platinumC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Notes
			// 
			this->Notes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Notes->Location = System::Drawing::Point(628, 31);
			this->Notes->MaximumSize = System::Drawing::Size(332, 750);
			this->Notes->Multiline = true;
			this->Notes->Name = L"Notes";
			this->Notes->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Notes->Size = System::Drawing::Size(332, 750);
			this->Notes->TabIndex = 70;
			this->Notes->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Класс";
			// 
			// ClassCB
			// 
			this->ClassCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ClassCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClassCB->FormattingEnabled = true;
			this->ClassCB->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Варвар", L"Бард", L"Жрец", L"Друид", L"Воин", L"Монах",
					L"Палладин", L"Следопыт", L"Плут", L"Чародей", L"Колдун", L"Волшебник"
			});
			this->ClassCB->Location = System::Drawing::Point(92, 125);
			this->ClassCB->Name = L"ClassCB";
			this->ClassCB->Size = System::Drawing::Size(233, 33);
			this->ClassCB->TabIndex = 1;
			this->ClassCB->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Раса";
			// 
			// RaceCB
			// 
			this->RaceCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->RaceCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RaceCB->FormattingEnabled = true;
			this->RaceCB->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Дварф", L"Эльф", L"Полурослик", L"Человек", L"Драконорожденный",
					L"Гном", L"Полуэльф", L"Полуорк", L"Тифлинг"
			});
			this->RaceCB->Location = System::Drawing::Point(92, 80);
			this->RaceCB->Name = L"RaceCB";
			this->RaceCB->Size = System::Drawing::Size(233, 33);
			this->RaceCB->TabIndex = 3;
			this->RaceCB->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Имя";
			// 
			// NameBox
			// 
			this->NameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameBox->Location = System::Drawing::Point(92, 20);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(393, 32);
			this->NameBox->TabIndex = 5;
			this->NameBox->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(344, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Уровень:";
			// 
			// LevelUpDown
			// 
			this->LevelUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LevelUpDown->Location = System::Drawing::Point(347, 105);
			this->LevelUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->LevelUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->LevelUpDown->Name = L"LevelUpDown";
			this->LevelUpDown->Size = System::Drawing::Size(58, 44);
			this->LevelUpDown->TabIndex = 7;
			this->LevelUpDown->TabStop = false;
			this->LevelUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->LevelUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::LevelUpDown_ValueChanged);
			// 
			// button1
			// 
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ImageIndex = 0;
			this->button1->Location = System::Drawing::Point(503, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 8;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CharacterSheet::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::White;
			this->imageList1->Images->SetKeyName(0, L"inspiration.png");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(491, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Вдохновение";
			// 
			// StrenghtUpDown
			// 
			this->StrenghtUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StrenghtUpDown->Location = System::Drawing::Point(55, 199);
			this->StrenghtUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->StrenghtUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->StrenghtUpDown->Name = L"StrenghtUpDown";
			this->StrenghtUpDown->Size = System::Drawing::Size(48, 32);
			this->StrenghtUpDown->TabIndex = 11;
			this->StrenghtUpDown->TabStop = false;
			this->StrenghtUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->StrenghtUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::StrenghtUpDown_ValueChanged);
			// 
			// LovkostUpDown
			// 
			this->LovkostUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LovkostUpDown->Location = System::Drawing::Point(55, 300);
			this->LovkostUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->LovkostUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->LovkostUpDown->Name = L"LovkostUpDown";
			this->LovkostUpDown->Size = System::Drawing::Size(48, 32);
			this->LovkostUpDown->TabIndex = 12;
			this->LovkostUpDown->TabStop = false;
			this->LovkostUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->LovkostUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::LovkostUpDown_ValueChanged);
			// 
			// teloslUpDown
			// 
			this->teloslUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->teloslUpDown->Location = System::Drawing::Point(55, 400);
			this->teloslUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->teloslUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->teloslUpDown->Name = L"teloslUpDown";
			this->teloslUpDown->Size = System::Drawing::Size(48, 32);
			this->teloslUpDown->TabIndex = 13;
			this->teloslUpDown->TabStop = false;
			this->teloslUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->teloslUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::teloslUpDown_ValueChanged);
			// 
			// intelUpDown
			// 
			this->intelUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->intelUpDown->Location = System::Drawing::Point(55, 499);
			this->intelUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->intelUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->intelUpDown->Name = L"intelUpDown";
			this->intelUpDown->Size = System::Drawing::Size(48, 32);
			this->intelUpDown->TabIndex = 14;
			this->intelUpDown->TabStop = false;
			this->intelUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->intelUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::intelUpDown_ValueChanged);
			// 
			// wisdomUpDown
			// 
			this->wisdomUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wisdomUpDown->Location = System::Drawing::Point(55, 599);
			this->wisdomUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->wisdomUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->wisdomUpDown->Name = L"wisdomUpDown";
			this->wisdomUpDown->Size = System::Drawing::Size(48, 32);
			this->wisdomUpDown->TabIndex = 15;
			this->wisdomUpDown->TabStop = false;
			this->wisdomUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->wisdomUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::wisdomUpDown_ValueChanged);
			// 
			// charismaUpDown
			// 
			this->charismaUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->charismaUpDown->Location = System::Drawing::Point(55, 699);
			this->charismaUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->charismaUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->charismaUpDown->Name = L"charismaUpDown";
			this->charismaUpDown->Size = System::Drawing::Size(48, 32);
			this->charismaUpDown->TabIndex = 16;
			this->charismaUpDown->TabStop = false;
			this->charismaUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->charismaUpDown->ValueChanged += gcnew System::EventHandler(this, &CharacterSheet::charismaUpDown_ValueChanged);
			// 
			// strenghtAdd
			// 
			this->strenghtAdd->AutoSize = true;
			this->strenghtAdd->BackColor = System::Drawing::Color::White;
			this->strenghtAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->strenghtAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->strenghtAdd->Location = System::Drawing::Point(65, 242);
			this->strenghtAdd->Name = L"strenghtAdd";
			this->strenghtAdd->Size = System::Drawing::Size(23, 20);
			this->strenghtAdd->TabIndex = 17;
			this->strenghtAdd->Text = L"-5";
			// 
			// lovkostAdd
			// 
			this->lovkostAdd->AutoSize = true;
			this->lovkostAdd->BackColor = System::Drawing::Color::White;
			this->lovkostAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lovkostAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lovkostAdd->Location = System::Drawing::Point(65, 341);
			this->lovkostAdd->Name = L"lovkostAdd";
			this->lovkostAdd->Size = System::Drawing::Size(23, 20);
			this->lovkostAdd->TabIndex = 18;
			this->lovkostAdd->Text = L"-5";
			// 
			// telosAdd
			// 
			this->telosAdd->AutoSize = true;
			this->telosAdd->BackColor = System::Drawing::Color::White;
			this->telosAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->telosAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->telosAdd->Location = System::Drawing::Point(65, 441);
			this->telosAdd->Name = L"telosAdd";
			this->telosAdd->Size = System::Drawing::Size(23, 20);
			this->telosAdd->TabIndex = 19;
			this->telosAdd->Text = L"-5";
			// 
			// intelAdd
			// 
			this->intelAdd->AutoSize = true;
			this->intelAdd->BackColor = System::Drawing::Color::White;
			this->intelAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->intelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->intelAdd->Location = System::Drawing::Point(65, 541);
			this->intelAdd->Name = L"intelAdd";
			this->intelAdd->Size = System::Drawing::Size(23, 20);
			this->intelAdd->TabIndex = 20;
			this->intelAdd->Text = L"-5";
			// 
			// wisdomAdd
			// 
			this->wisdomAdd->AutoSize = true;
			this->wisdomAdd->BackColor = System::Drawing::Color::White;
			this->wisdomAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->wisdomAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wisdomAdd->Location = System::Drawing::Point(65, 641);
			this->wisdomAdd->Name = L"wisdomAdd";
			this->wisdomAdd->Size = System::Drawing::Size(23, 20);
			this->wisdomAdd->TabIndex = 21;
			this->wisdomAdd->Text = L"-5";
			// 
			// charismaAdd
			// 
			this->charismaAdd->AutoSize = true;
			this->charismaAdd->BackColor = System::Drawing::Color::White;
			this->charismaAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->charismaAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->charismaAdd->Location = System::Drawing::Point(65, 740);
			this->charismaAdd->Name = L"charismaAdd";
			this->charismaAdd->Size = System::Drawing::Size(23, 20);
			this->charismaAdd->TabIndex = 22;
			this->charismaAdd->Text = L"-5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(439, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Б.М.";
			// 
			// MasterBonusText
			// 
			this->MasterBonusText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MasterBonusText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MasterBonusText->Location = System::Drawing::Point(430, 107);
			this->MasterBonusText->Name = L"MasterBonusText";
			this->MasterBonusText->ReadOnly = true;
			this->MasterBonusText->Size = System::Drawing::Size(46, 37);
			this->MasterBonusText->TabIndex = 24;
			this->MasterBonusText->TabStop = false;
			this->MasterBonusText->Text = L"+2";
			// 
			// Athl
			// 
			this->Athl->AutoSize = true;
			this->Athl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Athl->Location = System::Drawing::Point(163, 179);
			this->Athl->Name = L"Athl";
			this->Athl->Size = System::Drawing::Size(70, 17);
			this->Athl->TabIndex = 25;
			this->Athl->Text = L"Атлетика";
			this->Athl->UseVisualStyleBackColor = true;
			// 
			// Akr
			// 
			this->Akr->AutoSize = true;
			this->Akr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Akr->Location = System::Drawing::Point(163, 283);
			this->Akr->Name = L"Akr";
			this->Akr->Size = System::Drawing::Size(83, 17);
			this->Akr->TabIndex = 26;
			this->Akr->Text = L"Акробатика";
			this->Akr->UseVisualStyleBackColor = true;
			// 
			// HandDex
			// 
			this->HandDex->AutoSize = true;
			this->HandDex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HandDex->Location = System::Drawing::Point(163, 315);
			this->HandDex->Name = L"HandDex";
			this->HandDex->Size = System::Drawing::Size(93, 17);
			this->HandDex->TabIndex = 27;
			this->HandDex->Text = L"Ловкость Рук";
			this->HandDex->UseVisualStyleBackColor = true;
			// 
			// Stealth
			// 
			this->Stealth->AutoSize = true;
			this->Stealth->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stealth->Location = System::Drawing::Point(163, 344);
			this->Stealth->Name = L"Stealth";
			this->Stealth->Size = System::Drawing::Size(84, 17);
			this->Stealth->TabIndex = 28;
			this->Stealth->Text = L"Скрытность";
			this->Stealth->UseVisualStyleBackColor = true;
			// 
			// Analisys
			// 
			this->Analisys->AutoSize = true;
			this->Analisys->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Analisys->Location = System::Drawing::Point(163, 482);
			this->Analisys->Name = L"Analisys";
			this->Analisys->Size = System::Drawing::Size(60, 17);
			this->Analisys->TabIndex = 29;
			this->Analisys->Text = L"Анализ";
			this->Analisys->UseVisualStyleBackColor = true;
			// 
			// History
			// 
			this->History->AutoSize = true;
			this->History->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->History->Location = System::Drawing::Point(163, 499);
			this->History->Name = L"History";
			this->History->Size = System::Drawing::Size(66, 17);
			this->History->TabIndex = 30;
			this->History->Text = L"История";
			this->History->UseVisualStyleBackColor = true;
			// 
			// Magic
			// 
			this->Magic->AutoSize = true;
			this->Magic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Magic->Location = System::Drawing::Point(163, 514);
			this->Magic->Name = L"Magic";
			this->Magic->Size = System::Drawing::Size(55, 17);
			this->Magic->TabIndex = 31;
			this->Magic->Text = L"Магия";
			this->Magic->UseVisualStyleBackColor = true;
			// 
			// Nature
			// 
			this->Nature->AutoSize = true;
			this->Nature->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Nature->Location = System::Drawing::Point(163, 530);
			this->Nature->Name = L"Nature";
			this->Nature->Size = System::Drawing::Size(67, 17);
			this->Nature->TabIndex = 32;
			this->Nature->Text = L"Природа";
			this->Nature->UseVisualStyleBackColor = true;
			// 
			// Religic
			// 
			this->Religic->AutoSize = true;
			this->Religic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Religic->Location = System::Drawing::Point(163, 544);
			this->Religic->Name = L"Religic";
			this->Religic->Size = System::Drawing::Size(65, 17);
			this->Religic->TabIndex = 33;
			this->Religic->Text = L"Религия";
			this->Religic->UseVisualStyleBackColor = true;
			// 
			// AnimCare
			// 
			this->AnimCare->AutoSize = true;
			this->AnimCare->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AnimCare->Location = System::Drawing::Point(163, 644);
			this->AnimCare->Name = L"AnimCare";
			this->AnimCare->Size = System::Drawing::Size(128, 17);
			this->AnimCare->TabIndex = 38;
			this->AnimCare->Text = L"Уход за Животными";
			this->AnimCare->UseVisualStyleBackColor = true;
			// 
			// Pronic
			// 
			this->Pronic->AutoSize = true;
			this->Pronic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pronic->Location = System::Drawing::Point(163, 630);
			this->Pronic->Name = L"Pronic";
			this->Pronic->Size = System::Drawing::Size(119, 17);
			this->Pronic->TabIndex = 37;
			this->Pronic->Text = L"Проницательность";
			this->Pronic->UseVisualStyleBackColor = true;
			// 
			// Medic
			// 
			this->Medic->AutoSize = true;
			this->Medic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Medic->Location = System::Drawing::Point(163, 614);
			this->Medic->Name = L"Medic";
			this->Medic->Size = System::Drawing::Size(74, 17);
			this->Medic->TabIndex = 36;
			this->Medic->Text = L"Медицина";
			this->Medic->UseVisualStyleBackColor = true;
			// 
			// Surviv
			// 
			this->Surviv->AutoSize = true;
			this->Surviv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Surviv->Location = System::Drawing::Point(163, 599);
			this->Surviv->Name = L"Surviv";
			this->Surviv->Size = System::Drawing::Size(82, 17);
			this->Surviv->TabIndex = 35;
			this->Surviv->Text = L"Выживание";
			this->Surviv->UseVisualStyleBackColor = true;
			// 
			// Attent
			// 
			this->Attent->AutoSize = true;
			this->Attent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Attent->Location = System::Drawing::Point(163, 582);
			this->Attent->Name = L"Attent";
			this->Attent->Size = System::Drawing::Size(108, 17);
			this->Attent->TabIndex = 34;
			this->Attent->Text = L"Внимательность";
			this->Attent->UseVisualStyleBackColor = true;
			// 
			// ubejd
			// 
			this->ubejd->AutoSize = true;
			this->ubejd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ubejd->Location = System::Drawing::Point(163, 730);
			this->ubejd->Name = L"ubejd";
			this->ubejd->Size = System::Drawing::Size(81, 17);
			this->ubejd->TabIndex = 42;
			this->ubejd->Text = L"Убеждение";
			this->ubejd->UseVisualStyleBackColor = true;
			// 
			// lie
			// 
			this->lie->AutoSize = true;
			this->lie->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lie->Location = System::Drawing::Point(163, 714);
			this->lie->Name = L"lie";
			this->lie->Size = System::Drawing::Size(57, 17);
			this->lie->TabIndex = 41;
			this->lie->Text = L"Обман";
			this->lie->UseVisualStyleBackColor = true;
			// 
			// zapug
			// 
			this->zapug->AutoSize = true;
			this->zapug->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zapug->Location = System::Drawing::Point(163, 699);
			this->zapug->Name = L"zapug";
			this->zapug->Size = System::Drawing::Size(88, 17);
			this->zapug->TabIndex = 40;
			this->zapug->Text = L"Запугивание";
			this->zapug->UseVisualStyleBackColor = true;
			// 
			// vistup
			// 
			this->vistup->AutoSize = true;
			this->vistup->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vistup->Location = System::Drawing::Point(163, 682);
			this->vistup->Name = L"vistup";
			this->vistup->Size = System::Drawing::Size(90, 17);
			this->vistup->TabIndex = 39;
			this->vistup->Text = L"Выступление";
			this->vistup->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(342, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 26);
			this->label7->TabIndex = 45;
			this->label7->Text = L"ХП";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(274, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Всего";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(274, 242);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Текущие";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(274, 300);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 13);
			this->label10->TabIndex = 49;
			this->label10->Text = L"Временные";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(498, 179);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 26);
			this->label11->TabIndex = 51;
			this->label11->Text = L"КД";
			// 
			// notesbutton
			// 
			this->notesbutton->BackColor = System::Drawing::Color::Transparent;
			this->notesbutton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notesbutton.BackgroundImage")));
			this->notesbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->notesbutton->FlatAppearance->BorderSize = 0;
			this->notesbutton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->notesbutton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->notesbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->notesbutton->Location = System::Drawing::Point(525, 638);
			this->notesbutton->Name = L"notesbutton";
			this->notesbutton->Size = System::Drawing::Size(55, 55);
			this->notesbutton->TabIndex = 69;
			this->notesbutton->TabStop = false;
			this->notesbutton->UseVisualStyleBackColor = false;
			this->notesbutton->Click += gcnew System::EventHandler(this, &CharacterSheet::notesbutton_Click);
			// 
			// showOrNotNotes
			// 
			this->showOrNotNotes->Interval = 1;
			this->showOrNotNotes->Tick += gcnew System::EventHandler(this, &CharacterSheet::showOrNotNotes_Tick);
			// 
			// downloadButton
			// 
			this->downloadButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downloadButton.BackgroundImage")));
			this->downloadButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->downloadButton->FlatAppearance->BorderSize = 0;
			this->downloadButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->downloadButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->downloadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->downloadButton->Location = System::Drawing::Point(494, 20);
			this->downloadButton->Name = L"downloadButton";
			this->downloadButton->Size = System::Drawing::Size(35, 35);
			this->downloadButton->TabIndex = 71;
			this->downloadButton->UseVisualStyleBackColor = true;
			this->downloadButton->Click += gcnew System::EventHandler(this, &CharacterSheet::downloadButton_Click);
			// 
			// uploadButton
			// 
			this->uploadButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"uploadButton.BackgroundImage")));
			this->uploadButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->uploadButton->FlatAppearance->BorderSize = 0;
			this->uploadButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->uploadButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->uploadButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->uploadButton->Location = System::Drawing::Point(538, 18);
			this->uploadButton->Name = L"uploadButton";
			this->uploadButton->Size = System::Drawing::Size(35, 37);
			this->uploadButton->TabIndex = 72;
			this->uploadButton->UseVisualStyleBackColor = true;
			this->uploadButton->Click += gcnew System::EventHandler(this, &CharacterSheet::uploadButton_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->Filter = L"character file (*.character)|*.character|Все файлы (*.*)|*.*";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"txt";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"character file (*.character)|*.character|Все файлы (*.*)|*.*";
			// 
			// CharacterSheet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 807);
			this->Controls->Add(this->uploadButton);
			this->Controls->Add(this->downloadButton);
			this->Controls->Add(this->Notes);
			this->Controls->Add(this->notesbutton);
			this->Controls->Add(this->platinumC);
			this->Controls->Add(this->goldC);
			this->Controls->Add(this->silverC);
			this->Controls->Add(this->copperC);
			this->Controls->Add(pictureBox2);
			this->Controls->Add(this->dB3);
			this->Controls->Add(this->dB2);
			this->Controls->Add(this->dB1);
			this->Controls->Add(this->dG3);
			this->Controls->Add(this->dG2);
			this->Controls->Add(this->dG1);
			this->Controls->Add(label15);
			this->Controls->Add(label14);
			this->Controls->Add(label13);
			this->Controls->Add(this->Initiative);
			this->Controls->Add(label12);
			this->Controls->Add(this->ArmorC);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->TempHP);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->CurrentHP);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->MaxHP);
			this->Controls->Add(this->ubejd);
			this->Controls->Add(this->lie);
			this->Controls->Add(this->zapug);
			this->Controls->Add(this->vistup);
			this->Controls->Add(this->AnimCare);
			this->Controls->Add(this->Pronic);
			this->Controls->Add(this->Medic);
			this->Controls->Add(this->Surviv);
			this->Controls->Add(this->Attent);
			this->Controls->Add(this->Religic);
			this->Controls->Add(this->Nature);
			this->Controls->Add(this->Magic);
			this->Controls->Add(this->History);
			this->Controls->Add(this->Analisys);
			this->Controls->Add(this->Stealth);
			this->Controls->Add(this->HandDex);
			this->Controls->Add(this->Akr);
			this->Controls->Add(this->Athl);
			this->Controls->Add(this->MasterBonusText);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->charismaAdd);
			this->Controls->Add(this->wisdomAdd);
			this->Controls->Add(this->intelAdd);
			this->Controls->Add(this->telosAdd);
			this->Controls->Add(this->lovkostAdd);
			this->Controls->Add(this->strenghtAdd);
			this->Controls->Add(this->charismaUpDown);
			this->Controls->Add(this->wisdomUpDown);
			this->Controls->Add(this->intelUpDown);
			this->Controls->Add(this->teloslUpDown);
			this->Controls->Add(this->LovkostUpDown);
			this->Controls->Add(this->StrenghtUpDown);
			this->Controls->Add(pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LevelUpDown);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->RaceCB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ClassCB);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CharacterSheet";
			this->Text = L"CharacterSheet";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CharacterSheet::CharacterSheet_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LevelUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StrenghtUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LovkostUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->teloslUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->intelUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wisdomUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charismaUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (inspiration) {
			button1->ImageList = mptlist;
			inspiration = false;
		}
		else {
			button1->ImageList = imageList1;
			inspiration = true;
		}
	}
	private: System::Void StrenghtUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (StrenghtUpDown->Value == 1)
			strBon = -5;
		if (StrenghtUpDown->Value >= 2 && StrenghtUpDown->Value <= 3)
			strBon = -4;
		if (StrenghtUpDown->Value >= 4 && StrenghtUpDown->Value <= 5)
			strBon = -3;
		if (StrenghtUpDown->Value >= 6 && StrenghtUpDown->Value <= 7)
			strBon = -2;
		if (StrenghtUpDown->Value >= 8 && StrenghtUpDown->Value <= 9)
			strBon = -1;
		if (StrenghtUpDown->Value >= 10 && StrenghtUpDown->Value <= 11)
			strBon = 0;
		if (StrenghtUpDown->Value >= 12 && StrenghtUpDown->Value <= 13)
			strBon = 1;
		if (StrenghtUpDown->Value >= 14 && StrenghtUpDown->Value <= 15)
			strBon = 2;
		if (StrenghtUpDown->Value >= 16 && StrenghtUpDown->Value <= 17)
			strBon = 3;
		if (StrenghtUpDown->Value >= 18 && StrenghtUpDown->Value <= 19)
			strBon = 4;
		if (StrenghtUpDown->Value >= 20 && StrenghtUpDown->Value <= 21)
			strBon = 5;
		if (StrenghtUpDown->Value >= 22 && StrenghtUpDown->Value <= 23)
			strBon = 6;
		if (StrenghtUpDown->Value >= 24 && StrenghtUpDown->Value <= 25)
			strBon = 7;
		if (StrenghtUpDown->Value >= 26 && StrenghtUpDown->Value <= 27)
			strBon = 8;
		if (StrenghtUpDown->Value >= 28 && StrenghtUpDown->Value <= 29)
			strBon = 9;
		if (StrenghtUpDown->Value == 30)
			strBon = 10;
		updBonuses();
	}
	private: System::Void LovkostUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (LovkostUpDown->Value == 1)
			dexBon = -5;
		if (LovkostUpDown->Value >= 2 && LovkostUpDown->Value <= 3)
			dexBon = -4;
		if (LovkostUpDown->Value >= 4 && LovkostUpDown->Value <= 5)
			dexBon = -3;
		if (LovkostUpDown->Value >= 6 && LovkostUpDown->Value <= 7)
			dexBon = -2;
		if (LovkostUpDown->Value >= 8 && LovkostUpDown->Value <= 9)
			dexBon = -1;
		if (LovkostUpDown->Value >= 10 && LovkostUpDown->Value <= 11)
			dexBon = 0;
		if (LovkostUpDown->Value >= 12 && LovkostUpDown->Value <= 13)
			dexBon = 1;
		if (LovkostUpDown->Value >= 14 && LovkostUpDown->Value <= 15)
			dexBon = 2;
		if (LovkostUpDown->Value >= 16 && LovkostUpDown->Value <= 17)
			dexBon = 3;
		if (LovkostUpDown->Value >= 18 && LovkostUpDown->Value <= 19)
			dexBon = 4;
		if (LovkostUpDown->Value >= 20 && LovkostUpDown->Value <= 21)
			dexBon = 5;
		if (LovkostUpDown->Value >= 22 && LovkostUpDown->Value <= 23)
			dexBon = 6;
		if (LovkostUpDown->Value >= 24 && LovkostUpDown->Value <= 25)
			dexBon = 7;
		if (LovkostUpDown->Value >= 26 && LovkostUpDown->Value <= 27)
			dexBon = 8;
		if (LovkostUpDown->Value >= 28 && LovkostUpDown->Value <= 29)
			dexBon = 9;
		if (LovkostUpDown->Value == 30)
			dexBon = 10;
		updBonuses();
	}
	private: System::Void teloslUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (teloslUpDown->Value == 1)
			conBon = -5;
		if (teloslUpDown->Value >= 2 && teloslUpDown->Value <= 3)
			conBon = -4;
		if (teloslUpDown->Value >= 4 && teloslUpDown->Value <= 5)
			conBon = -3;
		if (teloslUpDown->Value >= 6 && teloslUpDown->Value <= 7)
			conBon = -2;
		if (teloslUpDown->Value >= 8 && teloslUpDown->Value <= 9)
			conBon = -1;
		if (teloslUpDown->Value >= 10 && teloslUpDown->Value <= 11)
			conBon = 0;
		if (teloslUpDown->Value >= 12 && teloslUpDown->Value <= 13)
			conBon = 1;
		if (teloslUpDown->Value >= 14 && teloslUpDown->Value <= 15)
			conBon = 2;
		if (teloslUpDown->Value >= 16 && teloslUpDown->Value <= 17)
			conBon = 3;
		if (teloslUpDown->Value >= 18 && teloslUpDown->Value <= 19)
			conBon = 4;
		if (teloslUpDown->Value >= 20 && teloslUpDown->Value <= 21)
			conBon = 5;
		if (teloslUpDown->Value >= 22 && teloslUpDown->Value <= 23)
			conBon = 6;
		if (teloslUpDown->Value >= 24 && teloslUpDown->Value <= 25)
			conBon = 7;
		if (teloslUpDown->Value >= 26 && teloslUpDown->Value <= 27)
			conBon = 8;
		if (teloslUpDown->Value >= 28 && teloslUpDown->Value <= 29)
			conBon = 9;
		if (teloslUpDown->Value == 30)
			conBon = 10;
		updBonuses();
	}
	private: System::Void intelUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (intelUpDown->Value == 1)
			intBon = -5;
		if (intelUpDown->Value >= 2 && intelUpDown->Value <= 3)
			intBon = -4;
		if (intelUpDown->Value >= 4 && intelUpDown->Value <= 5)
			intBon = -3;
		if (intelUpDown->Value >= 6 && intelUpDown->Value <= 7)
			intBon = -2;
		if (intelUpDown->Value >= 8 && intelUpDown->Value <= 9)
			intBon = -1;
		if (intelUpDown->Value >= 10 && intelUpDown->Value <= 11)
			intBon = 0;
		if (intelUpDown->Value >= 12 && intelUpDown->Value <= 13)
			intBon = 1;
		if (intelUpDown->Value >= 14 && intelUpDown->Value <= 15)
			intBon = 2;
		if (intelUpDown->Value >= 16 && intelUpDown->Value <= 17)
			intBon = 3;
		if (intelUpDown->Value >= 18 && intelUpDown->Value <= 19)
			intBon = 4;
		if (intelUpDown->Value >= 20 && intelUpDown->Value <= 21)
			intBon = 5;
		if (intelUpDown->Value >= 22 && intelUpDown->Value <= 23)
			intBon = 6;
		if (intelUpDown->Value >= 24 && intelUpDown->Value <= 25)
			intBon = 7;
		if (intelUpDown->Value >= 26 && intelUpDown->Value <= 27)
			intBon = 8;
		if (intelUpDown->Value >= 28 && intelUpDown->Value <= 29)
			intBon = 9;
		if (intelUpDown->Value == 30)
			intBon = 10;
		updBonuses();
	}
	private: System::Void wisdomUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (wisdomUpDown->Value == 1)
			wisBon = -5;
		if (wisdomUpDown->Value >= 2 && wisdomUpDown->Value <= 3)
			wisBon = -4;
		if (wisdomUpDown->Value >= 4 && wisdomUpDown->Value <= 5)
			wisBon = -3;
		if (wisdomUpDown->Value >= 6 && wisdomUpDown->Value <= 7)
			wisBon = -2;
		if (wisdomUpDown->Value >= 8 && wisdomUpDown->Value <= 9)
			wisBon = -1;
		if (wisdomUpDown->Value >= 10 && wisdomUpDown->Value <= 11)
			wisBon = 0;
		if (wisdomUpDown->Value >= 12 && wisdomUpDown->Value <= 13)
			wisBon = 1;
		if (wisdomUpDown->Value >= 14 && wisdomUpDown->Value <= 15)
			wisBon = 2;
		if (wisdomUpDown->Value >= 16 && wisdomUpDown->Value <= 17)
			wisBon = 3;
		if (wisdomUpDown->Value >= 18 && wisdomUpDown->Value <= 19)
			wisBon = 4;
		if (wisdomUpDown->Value >= 20 && wisdomUpDown->Value <= 21)
			wisBon = 5;
		if (wisdomUpDown->Value >= 22 && wisdomUpDown->Value <= 23)
			wisBon = 6;
		if (wisdomUpDown->Value >= 24 && wisdomUpDown->Value <= 25)
			wisBon = 7;
		if (wisdomUpDown->Value >= 26 && wisdomUpDown->Value <= 27)
			wisBon = 8;
		if (wisdomUpDown->Value >= 28 && wisdomUpDown->Value <= 29)
			wisBon = 9;
		if (wisdomUpDown->Value == 30)
			wisBon = 10;
		updBonuses();
	}
	private: System::Void charismaUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (charismaUpDown->Value == 1)
			charBon = -5;
		if (charismaUpDown->Value >= 2 && charismaUpDown->Value <= 3)
			charBon = -4;
		if (charismaUpDown->Value >= 4 && charismaUpDown->Value <= 5)
			charBon = -3;
		if (charismaUpDown->Value >= 6 && charismaUpDown->Value <= 7)
			charBon = -2;
		if (charismaUpDown->Value >= 8 && charismaUpDown->Value <= 9)
			charBon = -1;
		if (charismaUpDown->Value >= 10 && charismaUpDown->Value <= 11)
			charBon = 0;
		if (charismaUpDown->Value >= 12 && charismaUpDown->Value <= 13)
			charBon = 1;
		if (charismaUpDown->Value >= 14 && charismaUpDown->Value <= 15)
			charBon = 2;
		if (charismaUpDown->Value >= 16 && charismaUpDown->Value <= 17)
			charBon = 3;
		if (charismaUpDown->Value >= 18 && charismaUpDown->Value <= 19)
			charBon = 4;
		if (charismaUpDown->Value >= 20 && charismaUpDown->Value <= 21)
			charBon = 5;
		if (charismaUpDown->Value >= 22 && charismaUpDown->Value <= 23)
			charBon = 6;
		if (charismaUpDown->Value >= 24 && charismaUpDown->Value <= 25)
			charBon = 7;
		if (charismaUpDown->Value >= 26 && charismaUpDown->Value <= 27)
			charBon = 8;
		if (charismaUpDown->Value >= 28 && charismaUpDown->Value <= 29)
			charBon = 9;
		if (charismaUpDown->Value == 30)
			charBon = 10;
		updBonuses();
	}

	private:   System::Void updBonuses() {
		strenghtAdd->Text = (strBon >= 0) ? "+" + strBon.ToString() : strBon.ToString();
		lovkostAdd->Text = (dexBon >= 0) ? "+" + dexBon.ToString() : dexBon.ToString();
		telosAdd->Text = (conBon >= 0) ? "+" + conBon.ToString() : conBon.ToString();
		intelAdd->Text = (intBon >= 0) ? "+" + intBon.ToString() : intBon.ToString();
		wisdomAdd->Text = (wisBon >= 0) ? "+" + wisBon.ToString() : wisBon.ToString();
		charismaAdd->Text = (charBon >= 0) ? "+" + charBon.ToString() : charBon.ToString();
	}

		   System::Void updMasterBonus() {
			   if (LevelUpDown->Value >= 1 && LevelUpDown->Value <= 4) {
				   masterBonus = 2;
				   MasterBonusText->Text = "+" + masterBonus.ToString();
			   }
			   if (LevelUpDown->Value >= 5 && LevelUpDown->Value <= 8) {
				   masterBonus = 3;
				   MasterBonusText->Text = "+" + masterBonus.ToString();
			   }
			   if (LevelUpDown->Value >= 9 && LevelUpDown->Value <= 12) {
				   masterBonus = 4;
				   MasterBonusText->Text = "+" + masterBonus.ToString();
			   }
			   if (LevelUpDown->Value >= 13 && LevelUpDown->Value <= 16) {
				   masterBonus = 5;
				   MasterBonusText->Text = "+" + masterBonus.ToString();
			   }
			   if (LevelUpDown->Value >= 17 && LevelUpDown->Value <= 20) {
				   masterBonus = 6;
				   MasterBonusText->Text = "+" + masterBonus.ToString();
			   }
		   }


	private: System::Void LevelUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		updMasterBonus();
	}

	private: System::Void CharacterSheet_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		System::Windows::Forms::DialogResult dlgRes = MessageBox::Show("Вы точно хотите закрыть лист персонажа? Данные не сохраняются автоматически.", "", MessageBoxButtons::YesNo);

		if (dlgRes == System::Windows::Forms::DialogResult::No)
			e->Cancel = true;
	}
	private: System::Void notesbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Width <= 616 || this->Width >= 992) {
			showOrNotNotes->Start();
		}
	}
	private: System::Void showOrNotNotes_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (animforward)
			this->Width = this->Width + 32;
		else
			this->Width = this->Width - 32;
		if (this->Width >= 1000 || this->Width <= 608) {
			animforward = !animforward;
			showOrNotNotes->Stop();
		}
	}
	private: System::Void downloadButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void uploadButton_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
