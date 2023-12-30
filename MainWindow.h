#pragma once
#include "CharacterSheet.h";
#include "DMWindow.h";

namespace DnDHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: bool _dragging = false;
		   Point _offset;
		   Point^ _start_point = gcnew Point(0, 0);
		   CharacterSheet^ charwindow;
		   DMWindow^ dmwin;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ PlayerButton;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ DMButton;
	private: System::Windows::Forms::Button^ QuitButton;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PlayerButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DMButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->QuitButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->Controls->Add(this->QuitButton);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(304, 17);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::panel1_MouseUp);
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(199, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 17);
			this->button1->TabIndex = 0;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// PlayerButton
			// 
			this->PlayerButton->FlatAppearance->BorderSize = 0;
			this->PlayerButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->PlayerButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->PlayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PlayerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlayerButton->Location = System::Drawing::Point(39, 105);
			this->PlayerButton->Name = L"PlayerButton";
			this->PlayerButton->Size = System::Drawing::Size(75, 75);
			this->PlayerButton->TabIndex = 1;
			this->PlayerButton->TabStop = false;
			this->PlayerButton->Text = L"+";
			this->PlayerButton->UseVisualStyleBackColor = true;
			this->PlayerButton->Click += gcnew System::EventHandler(this, &MainWindow::PlayerButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Лист Персонажа";
			// 
			// DMButton
			// 
			this->DMButton->FlatAppearance->BorderSize = 0;
			this->DMButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->DMButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->DMButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DMButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DMButton->Location = System::Drawing::Point(199, 105);
			this->DMButton->Name = L"DMButton";
			this->DMButton->Size = System::Drawing::Size(75, 75);
			this->DMButton->TabIndex = 5;
			this->DMButton->TabStop = false;
			this->DMButton->Text = L"+";
			this->DMButton->UseVisualStyleBackColor = true;
			this->DMButton->Click += gcnew System::EventHandler(this, &MainWindow::DMButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(190, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Инстр ДМ";
			// 
			// QuitButton
			// 
			this->QuitButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->QuitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->QuitButton->FlatAppearance->BorderSize = 0;
			this->QuitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->QuitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 5, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->QuitButton->Location = System::Drawing::Point(253, 0);
			this->QuitButton->Name = L"QuitButton";
			this->QuitButton->Size = System::Drawing::Size(39, 17);
			this->QuitButton->TabIndex = 1;
			this->QuitButton->Text = L"X";
			this->QuitButton->UseVisualStyleBackColor = false;
			this->QuitButton->Click += gcnew System::EventHandler(this, &MainWindow::QuitButton_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DMButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PlayerButton);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainWindow";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		_dragging = true;
		_start_point = gcnew Point(e->X, e->Y);
	}
	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (_dragging)
		{
			Point p = PointToScreen(e->Location);
			this->Location = Point(p.X - this->_start_point->X, p.Y - this->_start_point->Y);
		}
	}
	private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		_dragging = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void PlayerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		charwindow = gcnew CharacterSheet();
		charwindow->Show();
	}
	private: System::Void DMButton_Click(System::Object^ sender, System::EventArgs^ e) {
		dmwin = gcnew DMWindow();
		dmwin->Show();
	}
private: System::Void QuitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
