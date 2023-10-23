#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ button_min_pl;
	private: System::Windows::Forms::Button^ button_pros;



	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ pr;
	private: System::Windows::Forms::Button^ min;
	private: System::Windows::Forms::Button^ pls;
	private: System::Windows::Forms::Button^ rwn;
















	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button_toch;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;

	protected:

	protected:


	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_min_pl = (gcnew System::Windows::Forms::Button());
			this->button_pros = (gcnew System::Windows::Forms::Button());
			this->del = (gcnew System::Windows::Forms::Button());
			this->pr = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->pls = (gcnew System::Windows::Forms::Button());
			this->rwn = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button_toch = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_exit->Location = System::Drawing::Point(438, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(38, 29);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(13, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(462, 82);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_AC->Location = System::Drawing::Point(13, 145);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(110, 98);
			this->button_AC->TabIndex = 2;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::button_AC_Click);
			// 
			// button_min_pl
			// 
			this->button_min_pl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button_min_pl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_min_pl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_min_pl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_min_pl->Location = System::Drawing::Point(130, 145);
			this->button_min_pl->Name = L"button_min_pl";
			this->button_min_pl->Size = System::Drawing::Size(110, 98);
			this->button_min_pl->TabIndex = 3;
			this->button_min_pl->Text = L"+/-";
			this->button_min_pl->UseVisualStyleBackColor = false;
			this->button_min_pl->Click += gcnew System::EventHandler(this, &MyForm::button_min_pl_Click);
			// 
			// button_pros
			// 
			this->button_pros->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(6)),
				static_cast<System::Int32>(static_cast<System::Byte>(121)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button_pros->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_pros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_pros->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_pros->Location = System::Drawing::Point(247, 145);
			this->button_pros->Name = L"button_pros";
			this->button_pros->Size = System::Drawing::Size(110, 98);
			this->button_pros->TabIndex = 4;
			this->button_pros->Text = L"%";
			this->button_pros->UseVisualStyleBackColor = false;
			this->button_pros->Click += gcnew System::EventHandler(this, &MyForm::button_pros_Click);
			// 
			// del
			// 
			this->del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->del->Location = System::Drawing::Point(363, 145);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(110, 98);
			this->del->TabIndex = 5;
			this->del->Text = L"/";
			this->del->UseVisualStyleBackColor = false;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// pr
			// 
			this->pr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->pr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pr->Location = System::Drawing::Point(363, 260);
			this->pr->Name = L"pr";
			this->pr->Size = System::Drawing::Size(110, 98);
			this->pr->TabIndex = 9;
			this->pr->Text = L"*";
			this->pr->UseVisualStyleBackColor = false;
			this->pr->Click += gcnew System::EventHandler(this, &MyForm::pr_Click);
			// 
			// min
			// 
			this->min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->min->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->min->Location = System::Drawing::Point(363, 374);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(110, 98);
			this->min->TabIndex = 13;
			this->min->Text = L"-";
			this->min->UseVisualStyleBackColor = false;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::min_Click);
			// 
			// pls
			// 
			this->pls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->pls->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->pls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pls->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pls->Location = System::Drawing::Point(365, 487);
			this->pls->Name = L"pls";
			this->pls->Size = System::Drawing::Size(110, 98);
			this->pls->TabIndex = 17;
			this->pls->Text = L"+";
			this->pls->UseVisualStyleBackColor = false;
			this->pls->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// rwn
			// 
			this->rwn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->rwn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rwn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rwn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->rwn->Location = System::Drawing::Point(363, 602);
			this->rwn->Name = L"rwn";
			this->rwn->Size = System::Drawing::Size(110, 98);
			this->rwn->TabIndex = 21;
			this->rwn->Text = L"=";
			this->rwn->UseVisualStyleBackColor = false;
			this->rwn->Click += gcnew System::EventHandler(this, &MyForm::rwn_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(13, 602);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(228, 98);
			this->button17->TabIndex = 18;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_toch
			// 
			this->button_toch->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_toch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_toch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_toch->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_toch->Location = System::Drawing::Point(247, 602);
			this->button_toch->Name = L"button_toch";
			this->button_toch->Size = System::Drawing::Size(110, 98);
			this->button_toch->TabIndex = 20;
			this->button_toch->Text = L".";
			this->button_toch->UseVisualStyleBackColor = false;
			this->button_toch->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button15->Location = System::Drawing::Point(247, 487);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(110, 98);
			this->button15->TabIndex = 16;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button14->Location = System::Drawing::Point(131, 487);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(110, 98);
			this->button14->TabIndex = 15;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button13->Location = System::Drawing::Point(13, 487);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(110, 98);
			this->button13->TabIndex = 14;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(13, 374);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(111, 98);
			this->button9->TabIndex = 10;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(130, 374);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(111, 98);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(247, 374);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(110, 98);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(14, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 98);
			this->button5->TabIndex = 6;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(130, 260);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 98);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(247, 260);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 98);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(489, 721);
			this->Controls->Add(this->rwn);
			this->Controls->Add(this->button_toch);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->pls);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->min);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->pr);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->del);
			this->Controls->Add(this->button_pros);
			this->Controls->Add(this->button_min_pl);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}

	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->label1->Text;
		if (!(text->Contains(","))) {
			this->label1->Text = text + ",";
		}
	}

	private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->label1->Text == "0" || is_equal) {
			this->label1->Text = button->Text;
			is_equal = false;
		}
		else {
			this->label1->Text = this->label1->Text + button->Text;
		}
	}
	private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void pr_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}

	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->label1->Text);
		this->user_action = action;
		this->label1->Text = "0";
	}
	private: System::Void rwn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		
		float second = System::Convert::ToDouble(this->label1->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/': 
			if (second == 0) {
				res = 0;
				this->label1->ForeColor = Color::Red;
				MessageBox::Show(this, "ƒействие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->first_num / second;
			}
		}
		this->is_equal = true;
		this->label1->Text = System::Convert::ToString(res);
	}
	private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->label1->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void button_min_pl_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->label1->Text);
		num *= -1;
		this->label1->Text = System::Convert::ToString(num);
	}
	private: System::Void button_pros_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
};
}
