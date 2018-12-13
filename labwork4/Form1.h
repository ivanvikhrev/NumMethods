#pragma once
#include "stdafx.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: ZedGraph::ZedGraphControl^  GraphErr;
	private: System::Windows::Forms::DataGridView^  dataGridViewT1;







	private: ZedGraph::ZedGraphControl^  GraphSol;
	private: System::Windows::Forms::Button^  ButtonT1_Clear;
	private: System::Windows::Forms::Button^  ButtonT1_Calc;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBoxT1_N;

	private: System::Windows::Forms::Label^  label_accuracy;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelT1_Acc;

	private: System::Windows::Forms::Label^  labelT1_X;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelT2_X;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  labelT2_Acc;

	private: System::Windows::Forms::TextBox^  textBoxT2_N;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  ButtonT2_Clear;

	private: System::Windows::Forms::Button^  ButtonT2_Calc;

	private: ZedGraph::ZedGraphControl^  GraphErrT2;

	private: System::Windows::Forms::DataGridView^  dataGridViewT2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: ZedGraph::ZedGraphControl^  GraphSolT2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  labelM_X;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  labelM_Acc;
	private: System::Windows::Forms::TextBox^  textBoxM_N;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  ButtonM_Clear;
	private: System::Windows::Forms::Button^  ButtonM_Calc;
	private: ZedGraph::ZedGraphControl^  GraphErrM;
	private: System::Windows::Forms::DataGridView^  dataGridViewM;





	private: ZedGraph::ZedGraphControl^  GraphSolM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;




	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelT1_X = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelT1_Acc = (gcnew System::Windows::Forms::Label());
			this->textBoxT1_N = (gcnew System::Windows::Forms::TextBox());
			this->label_accuracy = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ButtonT1_Clear = (gcnew System::Windows::Forms::Button());
			this->ButtonT1_Calc = (gcnew System::Windows::Forms::Button());
			this->GraphErr = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridViewT1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GraphSol = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelT2_X = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelT2_Acc = (gcnew System::Windows::Forms::Label());
			this->textBoxT2_N = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ButtonT2_Clear = (gcnew System::Windows::Forms::Button());
			this->ButtonT2_Calc = (gcnew System::Windows::Forms::Button());
			this->GraphErrT2 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridViewT2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GraphSolT2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelM_X = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelM_Acc = (gcnew System::Windows::Forms::Label());
			this->textBoxM_N = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ButtonM_Clear = (gcnew System::Windows::Forms::Button());
			this->ButtonM_Calc = (gcnew System::Windows::Forms::Button());
			this->GraphErrM = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridViewM = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GraphSolM = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewT1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewT2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewM))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(-2, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1069, 574);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->ButtonT1_Clear);
			this->tabPage1->Controls->Add(this->ButtonT1_Calc);
			this->tabPage1->Controls->Add(this->GraphErr);
			this->tabPage1->Controls->Add(this->dataGridViewT1);
			this->tabPage1->Controls->Add(this->GraphSol);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1061, 548);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Test1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelT1_X);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->labelT1_Acc);
			this->groupBox1->Controls->Add(this->textBoxT1_N);
			this->groupBox1->Controls->Add(this->label_accuracy);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 242);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(549, 243);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// labelT1_X
			// 
			this->labelT1_X->AutoSize = true;
			this->labelT1_X->Location = System::Drawing::Point(452, 107);
			this->labelT1_X->Name = L"labelT1_X";
			this->labelT1_X->Size = System::Drawing::Size(26, 13);
			this->labelT1_X->TabIndex = 7;
			this->labelT1_X->Text = L"\"...\"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(458, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Максимальное отклонение точного и приближенного решений наблюдается  в точку x = "
				L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(229, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Тестовая задача решена с точностью ε1 =  ";
			// 
			// labelT1_Acc
			// 
			this->labelT1_Acc->AutoSize = true;
			this->labelT1_Acc->Location = System::Drawing::Point(235, 82);
			this->labelT1_Acc->Name = L"labelT1_Acc";
			this->labelT1_Acc->Size = System::Drawing::Size(26, 13);
			this->labelT1_Acc->TabIndex = 4;
			this->labelT1_Acc->Text = L"\"...\"";
			// 
			// textBoxT1_N
			// 
			this->textBoxT1_N->Location = System::Drawing::Point(428, 28);
			this->textBoxT1_N->Name = L"textBoxT1_N";
			this->textBoxT1_N->Size = System::Drawing::Size(40, 20);
			this->textBoxT1_N->TabIndex = 3;
			this->textBoxT1_N->Text = L"10";
			// 
			// label_accuracy
			// 
			this->label_accuracy->AutoSize = true;
			this->label_accuracy->Location = System::Drawing::Point(94, 58);
			this->label_accuracy->Name = L"label_accuracy";
			this->label_accuracy->Size = System::Drawing::Size(0, 13);
			this->label_accuracy->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(299, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Требуемая точность решения тестовой задачи ε = 0.5e-6.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Для решения тестовой задачи использована сетка с числом разбиений по x:  n =";
			// 
			// ButtonT1_Clear
			// 
			this->ButtonT1_Clear->Location = System::Drawing::Point(177, 183);
			this->ButtonT1_Clear->Name = L"ButtonT1_Clear";
			this->ButtonT1_Clear->Size = System::Drawing::Size(156, 34);
			this->ButtonT1_Clear->TabIndex = 4;
			this->ButtonT1_Clear->Text = L"Clear";
			this->ButtonT1_Clear->UseVisualStyleBackColor = true;
			this->ButtonT1_Clear->Click += gcnew System::EventHandler(this, &Form1::ButtonT1_Clear_Click);
			// 
			// ButtonT1_Calc
			// 
			this->ButtonT1_Calc->Location = System::Drawing::Point(6, 183);
			this->ButtonT1_Calc->Name = L"ButtonT1_Calc";
			this->ButtonT1_Calc->Size = System::Drawing::Size(156, 34);
			this->ButtonT1_Calc->TabIndex = 3;
			this->ButtonT1_Calc->Text = L"Calc";
			this->ButtonT1_Calc->UseVisualStyleBackColor = true;
			this->ButtonT1_Calc->Click += gcnew System::EventHandler(this, &Form1::ButtonT1_Calc_Click);
			// 
			// GraphErr
			// 
			this->GraphErr->Location = System::Drawing::Point(582, 3);
			this->GraphErr->Name = L"GraphErr";
			this->GraphErr->ScrollGrace = 0;
			this->GraphErr->ScrollMaxX = 0;
			this->GraphErr->ScrollMaxY = 0;
			this->GraphErr->ScrollMaxY2 = 0;
			this->GraphErr->ScrollMinX = 0;
			this->GraphErr->ScrollMinY = 0;
			this->GraphErr->ScrollMinY2 = 0;
			this->GraphErr->Size = System::Drawing::Size(475, 246);
			this->GraphErr->TabIndex = 2;
			// 
			// dataGridViewT1
			// 
			this->dataGridViewT1->AllowUserToAddRows = false;
			this->dataGridViewT1->AllowUserToDeleteRows = false;
			this->dataGridViewT1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewT1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridViewT1->Location = System::Drawing::Point(6, 6);
			this->dataGridViewT1->Name = L"dataGridViewT1";
			this->dataGridViewT1->ReadOnly = true;
			this->dataGridViewT1->RowHeadersVisible = false;
			this->dataGridViewT1->Size = System::Drawing::Size(527, 171);
			this->dataGridViewT1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column1->HeaderText = L"№";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 43;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column2->HeaderText = L"Xi";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 41;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column3->HeaderText = L"U(Xi)";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 55;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Column4->HeaderText = L"V(Xi)";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 54;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"U(Xi) - V(Xi)";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// GraphSol
			// 
			this->GraphSol->Location = System::Drawing::Point(582, 266);
			this->GraphSol->Name = L"GraphSol";
			this->GraphSol->ScrollGrace = 0;
			this->GraphSol->ScrollMaxX = 0;
			this->GraphSol->ScrollMaxY = 0;
			this->GraphSol->ScrollMaxY2 = 0;
			this->GraphSol->ScrollMinX = 0;
			this->GraphSol->ScrollMinY = 0;
			this->GraphSol->ScrollMinY2 = 0;
			this->GraphSol->Size = System::Drawing::Size(475, 274);
			this->GraphSol->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->ButtonT2_Clear);
			this->tabPage2->Controls->Add(this->ButtonT2_Calc);
			this->tabPage2->Controls->Add(this->GraphErrT2);
			this->tabPage2->Controls->Add(this->dataGridViewT2);
			this->tabPage2->Controls->Add(this->GraphSolT2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1061, 548);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Test2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelT2_X);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->labelT2_Acc);
			this->groupBox2->Controls->Add(this->textBoxT2_N);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(5, 244);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(549, 243);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// labelT2_X
			// 
			this->labelT2_X->AutoSize = true;
			this->labelT2_X->Location = System::Drawing::Point(455, 107);
			this->labelT2_X->Name = L"labelT2_X";
			this->labelT2_X->Size = System::Drawing::Size(26, 13);
			this->labelT2_X->TabIndex = 7;
			this->labelT2_X->Text = L"\"...\"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(458, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Максимальное отклонение точного и приближенного решений наблюдается  в точку x = "
				L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(229, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Тестовая задача решена с точностью ε1 =  ";
			// 
			// labelT2_Acc
			// 
			this->labelT2_Acc->AutoSize = true;
			this->labelT2_Acc->Location = System::Drawing::Point(225, 82);
			this->labelT2_Acc->Name = L"labelT2_Acc";
			this->labelT2_Acc->Size = System::Drawing::Size(26, 13);
			this->labelT2_Acc->TabIndex = 4;
			this->labelT2_Acc->Text = L"\"...\"";
			// 
			// textBoxT2_N
			// 
			this->textBoxT2_N->Location = System::Drawing::Point(428, 28);
			this->textBoxT2_N->Name = L"textBoxT2_N";
			this->textBoxT2_N->Size = System::Drawing::Size(40, 20);
			this->textBoxT2_N->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(94, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(0, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(299, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Требуемая точность решения тестовой задачи ε = 0.5e-6.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(0, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(422, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Для решения тестовой задачи использована сетка с числом разбиений по x:  n =";
			// 
			// ButtonT2_Clear
			// 
			this->ButtonT2_Clear->Location = System::Drawing::Point(176, 185);
			this->ButtonT2_Clear->Name = L"ButtonT2_Clear";
			this->ButtonT2_Clear->Size = System::Drawing::Size(156, 34);
			this->ButtonT2_Clear->TabIndex = 10;
			this->ButtonT2_Clear->Text = L"Clear";
			this->ButtonT2_Clear->UseVisualStyleBackColor = true;
			// 
			// ButtonT2_Calc
			// 
			this->ButtonT2_Calc->Location = System::Drawing::Point(5, 185);
			this->ButtonT2_Calc->Name = L"ButtonT2_Calc";
			this->ButtonT2_Calc->Size = System::Drawing::Size(156, 34);
			this->ButtonT2_Calc->TabIndex = 9;
			this->ButtonT2_Calc->Text = L"Calc";
			this->ButtonT2_Calc->UseVisualStyleBackColor = true;
			// 
			// GraphErrT2
			// 
			this->GraphErrT2->Location = System::Drawing::Point(581, 5);
			this->GraphErrT2->Name = L"GraphErrT2";
			this->GraphErrT2->ScrollGrace = 0;
			this->GraphErrT2->ScrollMaxX = 0;
			this->GraphErrT2->ScrollMaxY = 0;
			this->GraphErrT2->ScrollMaxY2 = 0;
			this->GraphErrT2->ScrollMinX = 0;
			this->GraphErrT2->ScrollMinY = 0;
			this->GraphErrT2->ScrollMinY2 = 0;
			this->GraphErrT2->Size = System::Drawing::Size(475, 246);
			this->GraphErrT2->TabIndex = 8;
			// 
			// dataGridViewT2
			// 
			this->dataGridViewT2->AllowUserToAddRows = false;
			this->dataGridViewT2->AllowUserToDeleteRows = false;
			this->dataGridViewT2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewT2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridViewT2->Location = System::Drawing::Point(5, 8);
			this->dataGridViewT2->Name = L"dataGridViewT2";
			this->dataGridViewT2->ReadOnly = true;
			this->dataGridViewT2->RowHeadersVisible = false;
			this->dataGridViewT2->Size = System::Drawing::Size(527, 171);
			this->dataGridViewT2->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 43;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Xi";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 41;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn3->HeaderText = L"U(Xi)";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 55;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn4->HeaderText = L"V(Xi)";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 54;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn5->HeaderText = L"U(Xi) - V(Xi)";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 86;
			// 
			// GraphSolT2
			// 
			this->GraphSolT2->Location = System::Drawing::Point(581, 270);
			this->GraphSolT2->Name = L"GraphSolT2";
			this->GraphSolT2->ScrollGrace = 0;
			this->GraphSolT2->ScrollMaxX = 0;
			this->GraphSolT2->ScrollMaxY = 0;
			this->GraphSolT2->ScrollMaxY2 = 0;
			this->GraphSolT2->ScrollMinX = 0;
			this->GraphSolT2->ScrollMinY = 0;
			this->GraphSolT2->ScrollMinY2 = 0;
			this->GraphSolT2->Size = System::Drawing::Size(475, 274);
			this->GraphSolT2->TabIndex = 6;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Controls->Add(this->ButtonM_Clear);
			this->tabPage3->Controls->Add(this->ButtonM_Calc);
			this->tabPage3->Controls->Add(this->GraphErrM);
			this->tabPage3->Controls->Add(this->dataGridViewM);
			this->tabPage3->Controls->Add(this->GraphSolM);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1061, 548);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Main";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->labelM_X);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->labelM_Acc);
			this->groupBox3->Controls->Add(this->textBoxM_N);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Location = System::Drawing::Point(5, 244);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(549, 243);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Справка";
			// 
			// labelM_X
			// 
			this->labelM_X->AutoSize = true;
			this->labelM_X->Location = System::Drawing::Point(225, 107);
			this->labelM_X->Name = L"labelM_X";
			this->labelM_X->Size = System::Drawing::Size(26, 13);
			this->labelM_X->TabIndex = 7;
			this->labelM_X->Text = L"\"...\"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(59, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(146, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Это соответствует узлу x = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(168, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"ε2 =   ";
			// 
			// labelM_Acc
			// 
			this->labelM_Acc->AutoSize = true;
			this->labelM_Acc->Location = System::Drawing::Point(225, 82);
			this->labelM_Acc->Name = L"labelM_Acc";
			this->labelM_Acc->Size = System::Drawing::Size(26, 13);
			this->labelM_Acc->TabIndex = 4;
			this->labelM_Acc->Text = L"\"...\"";
			// 
			// textBoxM_N
			// 
			this->textBoxM_N->Location = System::Drawing::Point(428, 28);
			this->textBoxM_N->Name = L"textBoxM_N";
			this->textBoxM_N->Size = System::Drawing::Size(40, 20);
			this->textBoxM_N->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(94, 58);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 2;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(0, 58);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(545, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"При пересчете задачи с половинным шагом максимальная разность приближенных решени"
				L"й составила:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(0, 31);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(422, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Для решения тестовой задачи использована сетка с числом разбиений по x:  n =";
			// 
			// ButtonM_Clear
			// 
			this->ButtonM_Clear->Location = System::Drawing::Point(176, 185);
			this->ButtonM_Clear->Name = L"ButtonM_Clear";
			this->ButtonM_Clear->Size = System::Drawing::Size(156, 34);
			this->ButtonM_Clear->TabIndex = 16;
			this->ButtonM_Clear->Text = L"Clear";
			this->ButtonM_Clear->UseVisualStyleBackColor = true;
			// 
			// ButtonM_Calc
			// 
			this->ButtonM_Calc->Location = System::Drawing::Point(5, 185);
			this->ButtonM_Calc->Name = L"ButtonM_Calc";
			this->ButtonM_Calc->Size = System::Drawing::Size(156, 34);
			this->ButtonM_Calc->TabIndex = 15;
			this->ButtonM_Calc->Text = L"Calc";
			this->ButtonM_Calc->UseVisualStyleBackColor = true;
			// 
			// GraphErrM
			// 
			this->GraphErrM->Location = System::Drawing::Point(581, 5);
			this->GraphErrM->Name = L"GraphErrM";
			this->GraphErrM->ScrollGrace = 0;
			this->GraphErrM->ScrollMaxX = 0;
			this->GraphErrM->ScrollMaxY = 0;
			this->GraphErrM->ScrollMaxY2 = 0;
			this->GraphErrM->ScrollMinX = 0;
			this->GraphErrM->ScrollMinY = 0;
			this->GraphErrM->ScrollMinY2 = 0;
			this->GraphErrM->Size = System::Drawing::Size(475, 246);
			this->GraphErrM->TabIndex = 14;
			// 
			// dataGridViewM
			// 
			this->dataGridViewM->AllowUserToAddRows = false;
			this->dataGridViewM->AllowUserToDeleteRows = false;
			this->dataGridViewM->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewM->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridViewM->Location = System::Drawing::Point(5, 8);
			this->dataGridViewM->Name = L"dataGridViewM";
			this->dataGridViewM->ReadOnly = true;
			this->dataGridViewM->RowHeadersVisible = false;
			this->dataGridViewM->Size = System::Drawing::Size(527, 171);
			this->dataGridViewM->TabIndex = 13;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn6->HeaderText = L"№";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 43;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Xi";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 41;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn8->HeaderText = L"V(Xi)";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 54;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn9->HeaderText = L"V2(Xi)";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 60;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->dataGridViewTextBoxColumn10->HeaderText = L"V(Xi) - V2(Xi)";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 91;
			// 
			// GraphSolM
			// 
			this->GraphSolM->Location = System::Drawing::Point(581, 270);
			this->GraphSolM->Name = L"GraphSolM";
			this->GraphSolM->ScrollGrace = 0;
			this->GraphSolM->ScrollMaxX = 0;
			this->GraphSolM->ScrollMaxY = 0;
			this->GraphSolM->ScrollMaxY2 = 0;
			this->GraphSolM->ScrollMinX = 0;
			this->GraphSolM->ScrollMinY = 0;
			this->GraphSolM->ScrollMinY2 = 0;
			this->GraphSolM->Size = System::Drawing::Size(475, 274);
			this->GraphSolM->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 575);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"LabWork4";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewT1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewT2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewM))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	//первый график
	GraphSol->GraphPane->XAxis->Title->Text = "X";
	GraphSol->GraphPane->YAxis->Title->Text = "V";
	GraphSol->GraphPane->Title->Text = "Solution";
	GraphSol->IsShowVScrollBar = true;
	GraphSol->IsAutoScrollRange = true;
	GraphSol->PanButtons = System::Windows::Forms::MouseButtons::Left;
	GraphSol->PanModifierKeys = Keys::None;
	GraphSol->GraphPane->XAxis->MajorGrid->IsVisible = true;
	GraphSol->GraphPane->YAxis->MajorGrid->IsVisible = true;
	GraphSol->GraphPane->XAxis->MajorGrid->DashOff = true;
	GraphSol->GraphPane->YAxis->MajorGrid->DashOff = true;
	//Второй график
	GraphErr->GraphPane->XAxis->Title->Text = "X";
	GraphErr->GraphPane->YAxis->Title->Text = "U-V";
	GraphErr->GraphPane->Title->Text = "Error";
	GraphErr->IsShowVScrollBar = true;
	GraphErr->IsAutoScrollRange = true;
	GraphErr->PanButtons = System::Windows::Forms::MouseButtons::Left;
	GraphErr->PanModifierKeys = Keys::None;
	GraphErr->GraphPane->XAxis->MajorGrid->IsVisible = true;
	GraphErr->GraphPane->YAxis->MajorGrid->IsVisible = true;
	GraphErr->GraphPane->XAxis->MajorGrid->DashOff = true;
	GraphErr->GraphPane->YAxis->MajorGrid->DashOff = true;
	//Третий график
	GraphErrT2->GraphPane->XAxis->Title->Text = "X";
	GraphErrT2->GraphPane->YAxis->Title->Text = "U-V";
	GraphErrT2->GraphPane->Title->Text = "Error";
	GraphErrT2->IsShowVScrollBar = true;
	GraphErrT2->IsAutoScrollRange = true;
	GraphErrT2->PanButtons = System::Windows::Forms::MouseButtons::Left;
	GraphErrT2->PanModifierKeys = Keys::None;
	GraphErrT2->GraphPane->XAxis->MajorGrid->IsVisible = true;
	GraphErrT2->GraphPane->YAxis->MajorGrid->IsVisible = true;
	GraphErrT2->GraphPane->XAxis->MajorGrid->DashOff = true;
	GraphErrT2->GraphPane->YAxis->MajorGrid->DashOff = true;
	//4 график
	GraphSolT2->GraphPane->XAxis->Title->Text = "X";
	GraphSolT2->GraphPane->YAxis->Title->Text = "V";
	GraphSolT2->GraphPane->Title->Text = "Solution";
	GraphSolT2->IsShowVScrollBar = true;
	GraphSolT2->IsAutoScrollRange = true;
	GraphSolT2->PanButtons = System::Windows::Forms::MouseButtons::Left;
	GraphSolT2->PanModifierKeys = Keys::None;
	GraphSolT2->GraphPane->XAxis->MajorGrid->IsVisible = true;
	GraphSolT2->GraphPane->YAxis->MajorGrid->IsVisible = true;
	GraphSolT2->GraphPane->XAxis->MajorGrid->DashOff = true;
	GraphSolT2->GraphPane->YAxis->MajorGrid->DashOff = true;
	//5 график
	GraphErrM->GraphPane->XAxis->Title->Text = "X";
	GraphErrM->GraphPane->YAxis->Title->Text = "V-V2";
	GraphErrM->GraphPane->Title->Text = "Error";
	GraphErrM->IsShowVScrollBar = true;
	GraphErrM->IsAutoScrollRange = true;
	GraphErrM->PanButtons = System::Windows::Forms::MouseButtons::Left;
	GraphErrM->PanModifierKeys = Keys::None;
	GraphErrM->GraphPane->XAxis->MajorGrid->IsVisible = true;
	GraphErrM->GraphPane->YAxis->MajorGrid->IsVisible = true;
	GraphErrM->GraphPane->XAxis->MajorGrid->DashOff = true;
	GraphErrM->GraphPane->YAxis->MajorGrid->DashOff = true;
	//6 график
	GraphSolM->GraphPane->XAxis->Title->Text = "X";
	GraphSolM->GraphPane->YAxis->Title->Text = "V";
	GraphSolM->GraphPane->Title->Text = "Solution";
	GraphSolM->IsShowVScrollBar = true;
	GraphSolM->IsAutoScrollRange = true;
	GraphSolM->PanButtons = System::Windows::Forms::MouseButtons::Left;
	GraphSolM->PanModifierKeys = Keys::None;
	GraphSolM->GraphPane->XAxis->MajorGrid->IsVisible = true;
	GraphSolM->GraphPane->YAxis->MajorGrid->IsVisible = true;
	GraphSolM->GraphPane->XAxis->MajorGrid->DashOff = true;
	GraphSolM->GraphPane->YAxis->MajorGrid->DashOff = true;

}


void drawgraph(PointPairList^ graphU, PointPairList^ graphV, PointPairList^ graphE, ZedGraphControl^ Sol, ZedGraphControl^ Err) {
 
  GraphPane^ panel = Sol->GraphPane;
  GraphPane^ panel2 = Err->GraphPane;
  LineItem^ Curve1, ^Curve2, ^Curve3;
  Curve1 = panel->AddCurve("U", graphU, Color::Red, SymbolType::None);
  Curve2 = panel->AddCurve("V", graphV, Color::Blue, SymbolType::Circle);
  Curve3 = panel2->AddCurve("V", graphE, Color::Blue, SymbolType::None);
  panel->XAxis->Scale->MinAuto = true;
  panel->XAxis->Scale->MaxAuto = true;
  panel->YAxis->Scale->MinAuto = true;
  panel->YAxis->Scale->MaxAuto = true;
  panel->IsBoundedRanges = true;

  panel2->XAxis->Scale->MinAuto = true;
  panel2->XAxis->Scale->MaxAuto = true;
  panel2->YAxis->Scale->MinAuto = true;
  panel2->YAxis->Scale->MaxAuto = true;
  panel2->IsBoundedRanges = true;

  Sol->AxisChange();
  Sol->Invalidate();
  Err->AxisChange();
  Err->Invalidate();
}

private: System::Void ButtonT1_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
	GraphPane^ panel = GraphSol->GraphPane;
	GraphPane^ panel2 = GraphErr->GraphPane;
	if (panel->CurveList->Count > 0)
	{
		panel->CurveList->Clear();
		GraphSol->AxisChange();
		GraphSol->Invalidate();
	}
	if (panel2->CurveList->Count > 0)
	{
		panel2->CurveList->Clear();
		GraphErr->AxisChange();
		GraphErr->Invalidate();
	}
	dataGridViewT1->Rows->Clear();
	labelT1_Acc->Text = "...";
	labelT1_X->Text = "...";
}
private: System::Void ButtonT1_Calc_Click(System::Object^  sender, System::EventArgs^  e) {
	    ButtonT1_Clear_Click(sender, e);
	    PointPairList^ graphU = gcnew ZedGraph::PointPairList();
		PointPairList^ graphV =  gcnew ZedGraph::PointPairList();
		PointPairList^ graphE = gcnew ZedGraph::PointPairList();;
		int N = Convert::ToInt32(textBoxT1_N->Text);
		Test1 T(N);
		T.ThomasAlgoritm();
		double diff = 0;
		double max = abs(T.u[0] - T.v[0]);
		double xErr = T.x[0];
		for (int i = 0; i <= T.n; i++) {
			diff = (T.u[i] - T.v[i]);
			dataGridViewT1->Rows->Add();
			dataGridViewT1->Rows[i]->Cells[0]->Value = i;
			dataGridViewT1->Rows[i]->Cells[1]->Value = T.x[i];
			dataGridViewT1->Rows[i]->Cells[2]->Value = T.u[i];
			dataGridViewT1->Rows[i]->Cells[3]->Value = T.v[i];
			dataGridViewT1->Rows[i]->Cells[4]->Value =diff;
			if (abs(diff) > max) { max = abs(diff); xErr = T.x[i]; }
			graphU->Add(T.x[i], T.u[i]);
			graphV->Add(T.x[i], T.v[i]);
			graphE->Add(T.x[i], diff);
		}
		drawgraph(graphU, graphV, graphE, GraphSol, GraphErr);
		labelT1_Acc->Text = Convert::ToString(max);
		labelT1_X->Text = Convert::ToString(xErr);
	}


};

}
