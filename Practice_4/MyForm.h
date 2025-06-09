#pragma once
#include <cstdlib>
#include <ctime>

namespace Practice4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  lblArraySize;
	private: System::Windows::Forms::Label^  lblUnsortedArray;
	private: System::Windows::Forms::Label^  lblSortedArray;
	private: System::Windows::Forms::Label^  lblSumOdd;
	private: System::Windows::Forms::Label^  lblCountEven;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  lblBubbleSort;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		cli::array<int>^ a; 
		int n, i, j, dop, min, k;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->lblArraySize = (gcnew System::Windows::Forms::Label());
			this->lblUnsortedArray = (gcnew System::Windows::Forms::Label());
			this->lblSortedArray = (gcnew System::Windows::Forms::Label());
			this->lblSumOdd = (gcnew System::Windows::Forms::Label());
			this->lblCountEven = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->lblBubbleSort = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сортувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(370, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"10";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(325, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(147, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(325, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(370, 152);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(370, 178);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 7;
			// 
			// lblArraySize
			// 
			this->lblArraySize->AutoSize = true;
			this->lblArraySize->Location = System::Drawing::Point(147, 15);
			this->lblArraySize->Name = L"lblArraySize";
			this->lblArraySize->Size = System::Drawing::Size(217, 13);
			this->lblArraySize->TabIndex = 8;
			this->lblArraySize->Text = L"Введіть кількість елементів масиву (n <= 10):";
			// 
			// lblUnsortedArray
			// 
			this->lblUnsortedArray->AutoSize = true;
			this->lblUnsortedArray->Location = System::Drawing::Point(147, 54);
			this->lblUnsortedArray->Name = L"lblUnsortedArray";
			this->lblUnsortedArray->Size = System::Drawing::Size(100, 13);
			this->lblUnsortedArray->TabIndex = 9;
			this->lblUnsortedArray->Text = L"Заповнений масив:";
			// 
			// lblSortedArray
			// 
			this->lblSortedArray->AutoSize = true;
			this->lblSortedArray->Location = System::Drawing::Point(147, 110);
			this->lblSortedArray->Name = L"lblSortedArray";
			this->lblSortedArray->Size = System::Drawing::Size(104, 13);
			this->lblSortedArray->TabIndex = 10;
			this->lblSortedArray->Text = L"Сортований масив:";
			// 
			// lblSumOdd
			// 
			this->lblSumOdd->AutoSize = true;
			this->lblSumOdd->Location = System::Drawing::Point(147, 155);
			this->lblSumOdd->Name = L"lblSumOdd";
			this->lblSumOdd->Size = System::Drawing::Size(173, 13);
			this->lblSumOdd->TabIndex = 11;
			this->lblSumOdd->Text = L"Сума непарних елементів масиву:";
			// 
			// lblCountEven
			// 
			this->lblCountEven->AutoSize = true;
			this->lblCountEven->Location = System::Drawing::Point(147, 181);
			this->lblCountEven->Name = L"lblCountEven";
			this->lblCountEven->Size = System::Drawing::Size(175, 13);
			this->lblCountEven->TabIndex = 12;
			this->lblCountEven->Text = L"Кількість парних елементів масиву:";
			// 
			 // dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 250);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(220, 120);
			this->dataGridView1->TabIndex = 13;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(250, 250);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(220, 120);
			this->dataGridView2->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 200);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 23);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Сортувати (бульбашкою)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// lblBubbleSort
			// 
			this->lblBubbleSort->AutoSize = true;
			this->lblBubbleSort->Location = System::Drawing::Point(147, 205);
			this->lblBubbleSort->Name = L"lblBubbleSort";
			this->lblBubbleSort->Size = System::Drawing::Size(174, 13);
			this->lblBubbleSort->TabIndex = 16;
			this->lblBubbleSort->Text = L"Сортування методом бульбашки:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 380);
			this->Controls->Add(this->lblBubbleSort);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lblCountEven);
			this->Controls->Add(this->lblSumOdd);
			this->Controls->Add(this->lblSortedArray);
			this->Controls->Add(this->lblUnsortedArray);
			this->Controls->Add(this->lblArraySize);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	// Initialize DataGridView
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// Initialize dataGridView1 for a 5x5 matrix
		dataGridView1->ColumnCount = 5;
		for (int i = 0; i < 5; i++) {
			dataGridView1->Columns[i]->Width = 40;
		}
		dataGridView1->Rows->Add(5);

		// Initialize dataGridView2 for a single row to show column maximums
		dataGridView2->ColumnCount = 5;
		for (int i = 0; i < 5; i++) {
			dataGridView2->Columns[i]->Width = 40;
		}
		dataGridView2->Rows->Add(1);
	}

	// Заповнити масив - Fill array with random values
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Random^ rnd = gcnew Random();
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++) 
				dataGridView1->Rows[i]->Cells[j]->Value = rnd->Next(50);
	}

	// Сортувати масив - Find maximum values in each column
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int a[5][5], x[5];
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				a[i][j] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
		
		for (int j = 0; j < 5; j++)
		{
			x[j] = a[0][j];
			for (int i = 0; i < 5; i++)
				if(x[j] < a[i][j]) x[j] = a[i][j];
			dataGridView2->Rows[0]->Cells[j]->Value = Convert::ToString(x[j]);
		}
	}

	// Очистити - Clear all grid cells
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++) 
				dataGridView1->Rows[i]->Cells[j]->Value = "";
		
		for (int j = 0; j < 5; j++) 
			dataGridView2->Rows[0]->Cells[j]->Value = "";
	}

	// Сортувати масив методом бульбашки - Bubble sort implementation
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Read array values from dataGridView1
		n = Convert::ToInt32(textBox1->Text);
		if (n > 10) n = 10; // Limit to 10 elements
		
		a = gcnew cli::array<int>(n);
		
		// Get values from dataGridView1 (assuming single column)
		for (i = 0; i < n; i++) {
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr)
				a[i] = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
			else
				a[i] = 0;
		}
		
		// Bubble sort algorithm
		for (i = 0; i < n-1; i++)
			for (j = 0; j < n-i-1; j++)
			{
				if (a[j] > a[j+1])
				{
					dop = a[j+1];
					a[j+1] = a[j];
					a[j] = dop;
				}
			}
		
		// Clear previous data in DataGridView2
		dataGridView2->Columns->Clear();
		dataGridView2->Columns->Add("Column", "");
		dataGridView2->Rows->Clear();
		dataGridView2->Rows->Add(n);
		
		// Display sorted array in dataGridView2
		for (i = 0; i < n; i++)
			dataGridView2->Rows[i]->Cells[0]->Value = a[i].ToString();
	}
	};
}
