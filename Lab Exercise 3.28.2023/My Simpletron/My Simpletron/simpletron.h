//Simpletron.h
//Author: nmessa
//Date: April 24, 2008
//Class Definition file for the Simpletron Class
//This class represents an abstraction of a microprocessor
#ifndef SIMPLETRON_H
#define SIMPLETRON_H

//constant definitions
#define	READ		10
#define	WRITE		11
#define	LOAD		20
#define	STORE		21
#define	ADD		30
#define	SUBTRACT	31
#define	DIVIDE		32
#define	MULTIPLY	33
#define	BRANCH	40
#define	BRANCHNEG	41
#define	BRANCHZERO	42
#define	HALT		43

class Simpletron
{
	private:
		//Member variables
		int	Memory[100];
		int Accumulator;
		int InstructionCounter;
		int InstructionRegister;
		int OperationCode;
		int Operand;
		//Member functions (private)
		void Greeting(void);
		void InitializeMemory(void);
		void InitializeRegisters(void);
		void LoadProgram(void);
	public:
		//Member functions (public)
		Simpletron();
		void Execute(void);
		void DumpRegisters(void);
		void DumpMemory(void);
};
#endif