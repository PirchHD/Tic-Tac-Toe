#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{

		bool wcisniety = true;

	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbLicznikX;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbLicznikO;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::PictureBox^ B1;

	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ B2;
	private: System::Windows::Forms::PictureBox^ C2;






	private: System::Windows::Forms::PictureBox^ A3;
	private: System::Windows::Forms::PictureBox^ B3;
	private: System::Windows::Forms::PictureBox^ C3;



	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbLicznikX = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbLicznikO = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wygrane X:";
			// 
			// lbLicznikX
			// 
			this->lbLicznikX->AutoSize = true;
			this->lbLicznikX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbLicznikX->Location = System::Drawing::Point(35, 32);
			this->lbLicznikX->Name = L"lbLicznikX";
			this->lbLicznikX->Size = System::Drawing::Size(16, 16);
			this->lbLicznikX->TabIndex = 1;
			this->lbLicznikX->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(209, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Wygrane O:";
			// 
			// lbLicznikO
			// 
			this->lbLicznikO->AutoSize = true;
			this->lbLicznikO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbLicznikO->Location = System::Drawing::Point(232, 32);
			this->lbLicznikO->Name = L"lbLicznikO";
			this->lbLicznikO->Size = System::Drawing::Size(16, 16);
			this->lbLicznikO->TabIndex = 1;
			this->lbLicznikO->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(173, 357);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"New Game";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(12, 72);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 60);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A1->TabIndex = 4;
			this->A1->TabStop = false;
			this->A1->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(108, 72);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 60);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B1->TabIndex = 5;
			this->B1->TabStop = false;
			this->B1->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(200, 60);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 60);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C1->TabIndex = 6;
			this->C1->TabStop = false;
			this->C1->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(12, 167);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 60);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A2->TabIndex = 7;
			this->A2->TabStop = false;
			this->A2->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(108, 158);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 60);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B2->TabIndex = 8;
			this->B2->TabStop = false;
			this->B2->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(212, 158);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 60);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C2->TabIndex = 9;
			this->C2->TabStop = false;
			this->C2->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(15, 267);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 60);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->A3->TabIndex = 10;
			this->A3->TabStop = false;
			this->A3->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(108, 267);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 60);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->B3->TabIndex = 11;
			this->B3->TabStop = false;
			this->B3->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(212, 267);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 60);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->C3->TabIndex = 12;
			this->C3->TabStop = false;
			this->C3->Click += gcnew System::EventHandler(this, &Game::graj);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(284, 411);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbLicznikO);
			this->Controls->Add(this->lbLicznikX);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void graj(System::Object^ sender, System::EventArgs^ e) {

	PictureBox^ zdjecie = (PictureBox^)sender;

	if (wcisniety) {
		zdjecie->Image = imageList1->Images[1];
	}
	else {
		zdjecie->Image = imageList1->Images[0];
	}
	wcisniety = !wcisniety;
	zdjecie->Enabled = false;

}
};
}
