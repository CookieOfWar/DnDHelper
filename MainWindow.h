#pragma once
#include "CharacterSheet.h";

namespace DnDHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainWindow
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
		/// ќсвободить все используемые ресурсы.
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


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(284, 17);
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
			this->button1->Location = System::Drawing::Point(233, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 17);
			this->button1->TabIndex = 0;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(100, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 75);
			this->button2->TabIndex = 1;
			this->button2->TabStop = false;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainWindow";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	charwindow = gcnew CharacterSheet();
	charwindow->Show();
}
};
}
