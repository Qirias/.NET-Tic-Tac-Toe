#pragma once

namespace EmptyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	char Board[3][3];
	bool playing = true;
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lbScore;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbScore = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 55);
			this->button1->TabIndex = 90;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 55);
			this->button2->TabIndex = 91;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(360, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 55);
			this->button3->TabIndex = 92;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(216, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 55);
			this->button4->TabIndex = 93;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(288, 200);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 55);
			this->button5->TabIndex = 94;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(360, 200);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 55);
			this->button6->TabIndex = 95;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(216, 261);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 55);
			this->button7->TabIndex = 96;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(288, 261);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 55);
			this->button8->TabIndex = 97;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(360, 261);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 55);
			this->button9->TabIndex = 98;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(496, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 99;
			this->label2->Text = L"Player 2";
			// 
			// lbScore
			// 
			this->lbScore->AutoSize = true;
			this->lbScore->CausesValidation = false;
			this->lbScore->Location = System::Drawing::Point(304, 24);
			this->lbScore->Name = L"lbScore";
			this->lbScore->Size = System::Drawing::Size(44, 13);
			this->lbScore->TabIndex = 0;
			this->lbScore->Text = L"SCORE";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(161, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(40, 20);
			this->textBox1->TabIndex = 99;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(450, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 20);
			this->textBox2->TabIndex = 99;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 441);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbScore);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button1->Text = "X";
				Board[0][0] = 'X';
				button1->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button1->Text = "O";
				Board[0][0] = 'O';
				button1->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button2->Text = "X";
				Board[0][1] = 'X';
				button2->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button2->Text = "O";
				Board[0][1] = 'O';
				button2->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button3->Text = "X";
				Board[0][2] = 'X';
				button3->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button3->Text = "O";
				Board[0][2] = 'O';
				button3->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button4->Text = "X";
				Board[1][0] = 'X';
				button4->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button4->Text = "O";
				Board[1][0] = 'O';
				button4->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button5->Text = "X";
				Board[1][1] = 'X';
				button5->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button5->Text = "O";
				Board[1][1] = 'O';
				button5->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button6->Text = "X";
				Board[1][2] = 'X';
				button6->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button6->Text = "O";
				Board[1][2] = 'O';
				button6->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button7->Text = "X";
				Board[2][0] = 'X';
				button7->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button7->Text = "O";
				Board[2][0] = 'O';
				button7->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button8->Text = "X";
				Board[2][1] = 'X';
				button8->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button8->Text = "O";
				Board[2][1] = 'O';
				button8->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (playing)
			{
				button9->Text = "X";
				Board[2][2] = 'X';
				button9->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
			else
			{
				button9->Text = "O";
				Board[2][2] = 'O';
				button9->Enabled = false;
				playing = !playing;
				check();
				label1->Focus();
			}
		}

		void buttonsEnabled()
		{
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;
		}

		void buttonsDisabled()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}

		void cleanAll()
		{
			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					Board[i][j] = 0;

			button1->Text = "";
			button2->Text = "";
			button3->Text = "";
			button4->Text = "";
			button5->Text = "";
			button6->Text = "";
			button7->Text = "";
			button8->Text = "";
			button9->Text = "";
			buttonsEnabled();
			winner1 = false;
			winner2 = false;
		}

		unsigned short int cnt1 = 0, cnt2 = 0, drawcnt = 0;
		bool winner1 = false, winner2 = false, draw = true;

		void check()
		{
			++drawcnt;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (Board[i][0] == 'X' && Board[i][1] == 'X' && Board[i][2] == 'X' || Board[i][0] == 'O' && Board[i][1] == 'O' && Board[i][2] == 'O')
					{
						if (Board[i][0] == 'X')
						{
							++cnt1;
							winner1 = true;
							draw = false;
						}
						else
						{
							++cnt2;
							winner2 = true;
							draw = false;
						}
					}
					if (Board[0][i] == 'X' && Board[1][i] == 'X' && Board[2][i] == 'X' || Board[0][i] == 'O' && Board[1][i] == 'O' && Board[2][i] == 'O')
					{
						if (Board[0][i] == 'X')
						{
							++cnt1;
							winner1 = true;
							draw = false;
						}
						else
						{
							++cnt2;
							winner2 = true;
							draw = false;
						}
					}

					if (Board[0][0] == 'X' && Board[1][1] == 'X' && Board[2][2] == 'X' || Board[0][0] == 'O' && Board[1][1] == 'O' && Board[2][2] == 'O')
					{
						if (Board[0][0] == 'X')
						{
							++cnt1;
							winner1 = true;
							draw = false;
						}
						else
						{
							++cnt2;
							winner2 = true;
							draw = false;
						}
					}

					if (Board[0][2] == 'X' && Board[1][1] == 'X' && Board[2][0] == 'X' || Board[0][2] == 'O' && Board[1][1] == 'O' && Board[2][0] == 'O')
					{
						if (Board[0][2] == 'X')
						{
							++cnt1;
							winner1 = true;
							draw = false;
						}
						else
						{
							++cnt2;
							winner2 = true;
							draw = false;
						}
					}

					if (winner1 || winner2)
					{
						buttonsDisabled();
						auto result = MessageBox::Show("We have a Winner!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::None);
						if (result == EmptyProject::DialogResult::OK && winner1)
						{
							textBox1->Text = Convert::ToString(cnt1);
							drawcnt = 0;
							draw = true;
							cleanAll();
						}
						else if (result == EmptyProject::DialogResult::OK && winner2)
						{
							textBox2->Text = Convert::ToString(cnt2);
							drawcnt = 0;
							draw = true;
							cleanAll();
						}
					}
				}//for 2
			}//for 1
			if (draw && drawcnt == 9)
			{
				auto result = MessageBox::Show("Draw... Play Again!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::None);
				if (result == EmptyProject::DialogResult::OK)
				{
					drawcnt = 0;
					draw = true;
					cleanAll();
				}
			}
		}//void
	};
}
