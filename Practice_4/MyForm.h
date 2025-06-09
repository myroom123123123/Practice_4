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
	private: System::Windows::Forms::Button^  button4; // Mean calculation
	private: System::Windows::Forms::Button^  button5; // Max, min, sum calculation
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblResult; // Label to display result

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Заповнити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сортувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(350, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Квадрат";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(350, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Середнє";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			 // button5
			// 
			this->button5->Location = System::Drawing::Point(462, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Мін/Макс/Сума";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(12, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(560, 40);
			this->dataGridView1->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(12, 105);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(560, 40);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(12, 180);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(560, 40);
			this->dataGridView3->TabIndex = 4;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(171, 13);
			this->lblTitle->TabIndex = 5;
			this->lblTitle->Text = L"Заповнення одновимірної матриці";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(12, 230);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(0, 13);
			this->lblResult->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 260);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// Set up dataGridView1
		dataGridView1->ColumnCount = 10;
		for (int i = 0; i < 10; i++) {
			dataGridView1->Columns[i]->Width = 53;
		}
		dataGridView1->Rows->Add(1);
		
		// Set up dataGridView2
		dataGridView2->ColumnCount = 10;
		for (int i = 0; i < 10; i++) {
			dataGridView2->Columns[i]->Width = 53;
		}
		dataGridView2->Rows->Add(1);
		
		// Set up dataGridView3
		dataGridView3->ColumnCount = 10;
		for (int i = 0; i < 10; i++) {
			dataGridView3->Columns[i]->Width = 53;
		}
		dataGridView3->Rows->Add(1);
	}

	// Fill array with random values in range [-50 to 50]
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Random^ rnd = gcnew Random();
		for (int i = 0; i < 10; i++)
			dataGridView1->Rows[0]->Cells[i]->Value = rnd->Next(-50, 51); // Changed range to [-50, 50]
		
		// Clear result label when new array is generated
		lblResult->Text = "";
	}

	// Sort array using bubble sort algorithm
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a[10];
		
		// Get values from dataGridView1
		for (int i = 0; i < 10; i++) {
			if (dataGridView1->Rows[0]->Cells[i]->Value != nullptr)
				a[i] = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
			else
				a[i] = 0;
		}
		
		// Copy array values to dataGridView2
		for (int i = 0; i < 10; i++) {
			dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
		}
		
		// Sort array using bubble sort
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9-i; j++) {
				if (a[j] > a[j+1]) {
					int temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		
		// Display sorted array in dataGridView3
		for (int i = 0; i < 10; i++) {
			dataGridView3->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
		}
	}
	
	// Square each element in the array
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a[10];
		
		// Get values from dataGridView1
		for (int i = 0; i < 10; i++) {
			if (dataGridView1->Rows[0]->Cells[i]->Value != nullptr)
				a[i] = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
			else
				a[i] = 0;
		}
		
		// Square each element and display in dataGridView2
		for (int i = 0; i < 10; i++) {
			a[i] = a[i] * a[i];
			dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
		}
	}

	// Calculate arithmetic mean of even-indexed elements
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a[10];
		double sum = 0;
		int count = 0;
		
		// Get values from dataGridView1
		for (int i = 0; i < 10; i++) {
			if (dataGridView1->Rows[0]->Cells[i]->Value != nullptr)
				a[i] = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
			else
				a[i] = 0;
		}
		
		// Highlight even-indexed elements and calculate their sum
		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0) { // Even index (0, 2, 4, 6, 8)
				sum += a[i];
				count++;
				
				// Highlight the even-indexed elements in dataGridView2
				dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
				dataGridView2->Rows[0]->Cells[i]->Style->BackColor = Color::LightGreen;
			} else {
				// Clear odd-indexed cells
				dataGridView2->Rows[0]->Cells[i]->Value = "";
				dataGridView2->Rows[0]->Cells[i]->Style->BackColor = Color::White;
			}
		}
		
		// Calculate arithmetic mean
		double mean = sum / count;
		
		// Display result
		lblResult->Text = String::Format("Середнє арифметичне елементів з парними індексами: {0:F2}", mean);
	}
	
	// Find maximum, minimum and sum of all elements
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a[10];
		
		// Get values from dataGridView1
		for (int i = 0; i < 10; i++) {
			if (dataGridView1->Rows[0]->Cells[i]->Value != nullptr)
				a[i] = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
			else
				a[i] = 0;
		}
		
		// Initialize min and max with the first element
		int min = a[0];
		int max = a[0];
		int sum = a[0];
		int minIndex = 0;
		int maxIndex = 0;
		
		// Find min, max and calculate sum
		for (int i = 1; i < 10; i++) {
			if (a[i] < min) {
				min = a[i];
				minIndex = i;
			}
			if (a[i] > max) {
				max = a[i];
				maxIndex = i;
			}
			sum += a[i];
		}
		
		// Reset all cell backgrounds in dataGridView2
		for (int i = 0; i < 10; i++) {
			dataGridView2->Rows[0]->Cells[i]->Value = Convert::ToString(a[i]);
			dataGridView2->Rows[0]->Cells[i]->Style->BackColor = Color::White;
		}
		
		// Highlight min and max elements
		dataGridView2->Rows[0]->Cells[minIndex]->Style->BackColor = Color::LightBlue;
		dataGridView2->Rows[0]->Cells[maxIndex]->Style->BackColor = Color::LightCoral;
		
		// Display result
		lblResult->Text = String::Format("Мінімальний елемент: {0} (індекс {1}), Максимальний елемент: {2} (індекс {3}), Сума: {4}", 
			min, minIndex, max, maxIndex, sum);
	}
	};
}
