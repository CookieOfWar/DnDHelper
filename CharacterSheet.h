#pragma once

namespace DnDHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::CheckBox^ checkBox18;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ notesbutton;
	private: System::Windows::Forms::Timer^ showOrNotNotes;






















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
			System::Windows::Forms::TextBox^ textBox2;
			System::Windows::Forms::TextBox^ textBox3;
			System::Windows::Forms::TextBox^ textBox4;
			System::Windows::Forms::TextBox^ textBox5;
			System::Windows::Forms::Label^ label12;
			System::Windows::Forms::TextBox^ textBox6;
			System::Windows::Forms::Label^ label13;
			System::Windows::Forms::Label^ label14;
			System::Windows::Forms::Label^ label15;
			System::Windows::Forms::CheckBox^ checkBox19;
			System::Windows::Forms::CheckBox^ checkBox20;
			System::Windows::Forms::CheckBox^ checkBox21;
			System::Windows::Forms::CheckBox^ checkBox22;
			System::Windows::Forms::CheckBox^ checkBox23;
			System::Windows::Forms::CheckBox^ checkBox24;
			System::Windows::Forms::PictureBox^ pictureBox2;
			System::Windows::Forms::TextBox^ textBox7;
			System::Windows::Forms::TextBox^ textBox8;
			System::Windows::Forms::TextBox^ textBox9;
			System::Windows::Forms::TextBox^ textBox10;
			System::Windows::Forms::TextBox^ textBox11;
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->notesbutton = (gcnew System::Windows::Forms::Button());
			this->showOrNotNotes = (gcnew System::Windows::Forms::Timer(this->components));
			pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			textBox2 = (gcnew System::Windows::Forms::TextBox());
			textBox3 = (gcnew System::Windows::Forms::TextBox());
			textBox4 = (gcnew System::Windows::Forms::TextBox());
			textBox5 = (gcnew System::Windows::Forms::TextBox());
			label12 = (gcnew System::Windows::Forms::Label());
			textBox6 = (gcnew System::Windows::Forms::TextBox());
			label13 = (gcnew System::Windows::Forms::Label());
			label14 = (gcnew System::Windows::Forms::Label());
			label15 = (gcnew System::Windows::Forms::Label());
			checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			textBox7 = (gcnew System::Windows::Forms::TextBox());
			textBox8 = (gcnew System::Windows::Forms::TextBox());
			textBox9 = (gcnew System::Windows::Forms::TextBox());
			textBox10 = (gcnew System::Windows::Forms::TextBox());
			textBox11 = (gcnew System::Windows::Forms::TextBox());
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
			// textBox2
			// 
			textBox2->Location = System::Drawing::Point(347, 211);
			textBox2->Name = L"textBox2";
			textBox2->Size = System::Drawing::Size(100, 20);
			textBox2->TabIndex = 44;
			textBox2->TabStop = false;
			textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox3->Location = System::Drawing::Point(347, 241);
			textBox3->Name = L"textBox3";
			textBox3->Size = System::Drawing::Size(100, 44);
			textBox3->TabIndex = 48;
			textBox3->TabStop = false;
			textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox4->Location = System::Drawing::Point(346, 300);
			textBox4->Name = L"textBox4";
			textBox4->Size = System::Drawing::Size(100, 44);
			textBox4->TabIndex = 50;
			textBox4->TabStop = false;
			textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox5->Location = System::Drawing::Point(473, 226);
			textBox5->Name = L"textBox5";
			textBox5->Size = System::Drawing::Size(100, 62);
			textBox5->TabIndex = 52;
			textBox5->TabStop = false;
			textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// textBox6
			// 
			textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox6->Location = System::Drawing::Point(453, 410);
			textBox6->Name = L"textBox6";
			textBox6->Size = System::Drawing::Size(100, 62);
			textBox6->TabIndex = 54;
			textBox6->TabStop = false;
			textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// checkBox19
			// 
			checkBox19->AutoSize = true;
			checkBox19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			checkBox19->Location = System::Drawing::Point(443, 567);
			checkBox19->Name = L"checkBox19";
			checkBox19->Size = System::Drawing::Size(12, 11);
			checkBox19->TabIndex = 58;
			checkBox19->TabStop = false;
			checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			checkBox20->AutoSize = true;
			checkBox20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			checkBox20->Location = System::Drawing::Point(473, 567);
			checkBox20->Name = L"checkBox20";
			checkBox20->Size = System::Drawing::Size(12, 11);
			checkBox20->TabIndex = 59;
			checkBox20->TabStop = false;
			checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			checkBox21->AutoSize = true;
			checkBox21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			checkBox21->Location = System::Drawing::Point(503, 567);
			checkBox21->Name = L"checkBox21";
			checkBox21->Size = System::Drawing::Size(12, 11);
			checkBox21->TabIndex = 60;
			checkBox21->TabStop = false;
			checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			checkBox22->AutoSize = true;
			checkBox22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			checkBox22->Location = System::Drawing::Point(503, 605);
			checkBox22->Name = L"checkBox22";
			checkBox22->Size = System::Drawing::Size(12, 11);
			checkBox22->TabIndex = 63;
			checkBox22->TabStop = false;
			checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			checkBox23->AutoSize = true;
			checkBox23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			checkBox23->Location = System::Drawing::Point(473, 605);
			checkBox23->Name = L"checkBox23";
			checkBox23->Size = System::Drawing::Size(12, 11);
			checkBox23->TabIndex = 62;
			checkBox23->TabStop = false;
			checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			checkBox24->AutoSize = true;
			checkBox24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			checkBox24->Location = System::Drawing::Point(443, 605);
			checkBox24->Name = L"checkBox24";
			checkBox24->Size = System::Drawing::Size(12, 11);
			checkBox24->TabIndex = 61;
			checkBox24->TabStop = false;
			checkBox24->UseVisualStyleBackColor = true;
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
			// textBox7
			// 
			textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox7->Location = System::Drawing::Point(291, 740);
			textBox7->Name = L"textBox7";
			textBox7->Size = System::Drawing::Size(38, 25);
			textBox7->TabIndex = 65;
			textBox7->TabStop = false;
			textBox7->Text = L"0";
			textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox8->Location = System::Drawing::Point(366, 740);
			textBox8->Name = L"textBox8";
			textBox8->Size = System::Drawing::Size(38, 25);
			textBox8->TabIndex = 66;
			textBox8->TabStop = false;
			textBox8->Text = L"0";
			textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox9->Location = System::Drawing::Point(443, 740);
			textBox9->Name = L"textBox9";
			textBox9->Size = System::Drawing::Size(38, 25);
			textBox9->TabIndex = 67;
			textBox9->TabStop = false;
			textBox9->Text = L"0";
			textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox10->Location = System::Drawing::Point(518, 739);
			textBox10->Name = L"textBox10";
			textBox10->Size = System::Drawing::Size(38, 25);
			textBox10->TabIndex = 68;
			textBox10->TabStop = false;
			textBox10->Text = L"0";
			textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Варвар", L"Бард", L"Жрец", L"Друид", L"Воин",
					L"Монах", L"Палладин", L"Следопыт", L"Плут", L"Чародей", L"Колдун", L"Волшебник"
			});
			this->comboBox1->Location = System::Drawing::Point(92, 125);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(233, 33);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->TabStop = false;
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
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Дварф", L"Эльф", L"Полурослик", L"Человек", L"Драконорожденный",
					L"Гном", L"Полуэльф", L"Полуорк", L"Тифлинг"
			});
			this->comboBox2->Location = System::Drawing::Point(92, 80);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(233, 33);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->TabStop = false;
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
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(92, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(488, 32);
			this->textBox1->TabIndex = 5;
			this->textBox1->TabStop = false;
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
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Location = System::Drawing::Point(163, 179);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(70, 17);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"Атлетика";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->Location = System::Drawing::Point(163, 283);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(83, 17);
			this->checkBox2->TabIndex = 26;
			this->checkBox2->Text = L"Акробатика";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Location = System::Drawing::Point(163, 315);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(93, 17);
			this->checkBox3->TabIndex = 27;
			this->checkBox3->Text = L"Ловкость Рук";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Location = System::Drawing::Point(163, 344);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(84, 17);
			this->checkBox4->TabIndex = 28;
			this->checkBox4->Text = L"Скрытность";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Location = System::Drawing::Point(163, 482);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(60, 17);
			this->checkBox5->TabIndex = 29;
			this->checkBox5->Text = L"Анализ";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox6->Location = System::Drawing::Point(163, 499);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(66, 17);
			this->checkBox6->TabIndex = 30;
			this->checkBox6->Text = L"История";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox7->Location = System::Drawing::Point(163, 514);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(55, 17);
			this->checkBox7->TabIndex = 31;
			this->checkBox7->Text = L"Магия";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox8->Location = System::Drawing::Point(163, 530);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(67, 17);
			this->checkBox8->TabIndex = 32;
			this->checkBox8->Text = L"Природа";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox9->Location = System::Drawing::Point(163, 544);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(65, 17);
			this->checkBox9->TabIndex = 33;
			this->checkBox9->Text = L"Религия";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox10->Location = System::Drawing::Point(163, 644);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(128, 17);
			this->checkBox10->TabIndex = 38;
			this->checkBox10->Text = L"Уход за Животными";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox11->Location = System::Drawing::Point(163, 630);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(119, 17);
			this->checkBox11->TabIndex = 37;
			this->checkBox11->Text = L"Проницательность";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox12->Location = System::Drawing::Point(163, 614);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(74, 17);
			this->checkBox12->TabIndex = 36;
			this->checkBox12->Text = L"Медицина";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox13->Location = System::Drawing::Point(163, 599);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(82, 17);
			this->checkBox13->TabIndex = 35;
			this->checkBox13->Text = L"Выживание";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox14->Location = System::Drawing::Point(163, 582);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(108, 17);
			this->checkBox14->TabIndex = 34;
			this->checkBox14->Text = L"Внимательность";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox15->Location = System::Drawing::Point(163, 730);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(81, 17);
			this->checkBox15->TabIndex = 42;
			this->checkBox15->Text = L"Убеждение";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox16->Location = System::Drawing::Point(163, 714);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(57, 17);
			this->checkBox16->TabIndex = 41;
			this->checkBox16->Text = L"Обман";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox17->Location = System::Drawing::Point(163, 699);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(88, 17);
			this->checkBox17->TabIndex = 40;
			this->checkBox17->Text = L"Запугивание";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox18->Location = System::Drawing::Point(163, 682);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(90, 17);
			this->checkBox18->TabIndex = 39;
			this->checkBox18->Text = L"Выступление";
			this->checkBox18->UseVisualStyleBackColor = true;
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
			// textBox11
			// 
			textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			textBox11->Location = System::Drawing::Point(628, 31);
			textBox11->MaximumSize = System::Drawing::Size(332, 750);
			textBox11->Multiline = true;
			textBox11->Name = L"textBox11";
			textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			textBox11->Size = System::Drawing::Size(332, 750);
			textBox11->TabIndex = 70;
			textBox11->TabStop = false;
			// 
			// CharacterSheet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 807);
			this->Controls->Add(textBox11);
			this->Controls->Add(this->notesbutton);
			this->Controls->Add(textBox10);
			this->Controls->Add(textBox9);
			this->Controls->Add(textBox8);
			this->Controls->Add(textBox7);
			this->Controls->Add(pictureBox2);
			this->Controls->Add(checkBox22);
			this->Controls->Add(checkBox23);
			this->Controls->Add(checkBox24);
			this->Controls->Add(checkBox21);
			this->Controls->Add(checkBox20);
			this->Controls->Add(checkBox19);
			this->Controls->Add(label15);
			this->Controls->Add(label14);
			this->Controls->Add(label13);
			this->Controls->Add(textBox6);
			this->Controls->Add(label12);
			this->Controls->Add(textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(textBox2);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
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
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
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
		System::Windows::Forms::DialogResult dlgRes = MessageBox::Show("Вы точно хотите закрыть лист персонажа? Данные не сохранятся.", "", MessageBoxButtons::YesNo);

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
			this->Width = this->Width + 8;
		else
			this->Width = this->Width - 8;
		if (this->Width >= 1000 || this->Width <= 608) {
			animforward = !animforward;
			showOrNotNotes->Stop();
		}
	}
	};
}
