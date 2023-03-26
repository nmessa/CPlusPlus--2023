//Simpletron.cpp
//Author: nmessa
//Date: April 24, 2008
//This is the class implementation file for the Simpletron class

#include "simpletron.h"
#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//Constructor function that initializes memory, registers, and loads the SML program
Simpletron::Simpletron()
{
	Greeting();
	InitializeRegisters();
	InitializeMemory();
	LoadProgram();
}

//Provides a greeting when the processor is constructed
void  Simpletron::Greeting(void)
{
	cout << "Welcome to the Simpletron\nLow Performance Microprocessor" << endl;
	cout << "Hit any key to commence program execution\n\n\n";
	getch();	// need to include <conio.h>
}


//Used to initialize all 100 memory locations to 0
void  Simpletron::InitializeMemory(void)
{
	int  i;
	for (i=0; i<100; i++)
		Memory[i] = 0;
}


//Used to set all registers to 0
void  Simpletron::InitializeRegisters(void)
{
	Accumulator=0;
	InstructionCounter=0;
	InstructionRegister=0;
	OperationCode=0;
	Operand=0;
}


//Opens the SML program file and reads instructions into memory
void  Simpletron::LoadProgram(void)
{
	//Modify this line to reflect the name of the program file (e.g. program1.txt or program2.txt)
	ifstream infile("program.txt");	// be sure program.txt is stored in the project folder
	int  instruction;
	int  i;

	instruction = 1;
	i = 0;
	while (instruction != 0)
	{
		infile >> instruction;
		Memory[i] = instruction;
		i++;
	}
}


//Executes the SML program
//Instruction set consists of 12 operations
void  Simpletron::Execute(void)
{
	do
	{
		InstructionRegister = Memory[InstructionCounter]; //fetch an instruction
		OperationCode = InstructionRegister / 100;	//decode the instruction by breakin
		Operand = InstructionRegister % 100;		//it into OPCODE and OPERAND

		switch (OperationCode)                      //find which instruction
		{
			case READ:  cout << "Enter a number:  ";  //read from keyboard 
						cin >> Memory[Operand];       //place into memory  
						InstructionCounter++;         //setup for next instruction
						break;

			case WRITE: cout << "Result: " <<  
							Memory[Operand] << endl; //send memory to monitor
						InstructionCounter++;        //setup for next instruction
						break;

			case LOAD:	Accumulator = Memory[Operand]; //put memory into accumulator
						InstructionCounter++;		   //setup for next instruction
						break;

			case STORE: Memory[Operand] = Accumulator; //put accumulator into memory
						InstructionCounter++;		   //setup for next instruction
						break;

			case ADD:	Accumulator += Memory[Operand];//Add memory contents to accumulator
						InstructionCounter++;		   //setup for next instruction
						break;

			case SUBTRACT:  Accumulator -= Memory[Operand];//subtract memory from addumulator
							InstructionCounter++;		   //setup for next instruction
							break;
			case DIVIDE:	if (Memory[Operand] == 0)  //handle divide by 0 error
							{
								cout <<"Attempt to divide by 0\n";
								cout << "Simpletron execution abnormally terminated\n";
								OperationCode = 43;
								break;
							}
							else
							{
								Accumulator /= Memory[Operand];
								InstructionCounter++;
								break;
							}

			case MULTIPLY:  Accumulator *= Memory[Operand];  //Multiply accumulator by memory content
							InstructionCounter++;			 //setup for next instruction
							break;

			case BRANCH:	InstructionCounter = Operand; //Unconditional branch
							break;

			case BRANCHNEG: if (Accumulator < 0)	//Branch if accumulator is negative
								InstructionCounter = Operand;
							else
								InstructionCounter++;
							break;

			case BRANCHZERO: if (Accumulator == 0)  //Branch if accumulator = 0
								InstructionCounter = Operand;
							 else
								InstructionCounter++;
							break;

			case HALT: cout << "\n\n***Simpletron Execution Terminated***\n\n\n";
					   break;   //end program execution
		}  /*End of switch*/
	}while (OperationCode != HALT);
}


//Displays all register contents to monitor
void  Simpletron::DumpRegisters(void)
{
	cout << "\n\nREGISTERS\n";
	cout << "Accumulator\t\t\t" << Accumulator << endl;
	cout << "Instruction Counter\t\t" << InstructionCounter << endl;
	cout << "Instruction Register\t\t" << InstructionRegister << endl;
	cout << "Operation Code\t\t\t" << OperationCode << endl;
	cout << "Operand\t\t\t\t" << Operand << endl;
}

//Displays all memory location contents
void  Simpletron::DumpMemory(void)
{
	int i;
	cout << "\n\nMEMORY\n";
	for (i = 1; i <= 100; i++)
	{
		cout << Memory[i-1] << "\t";
		if (i % 10 == 0)
			cout << endl;
	}
}

