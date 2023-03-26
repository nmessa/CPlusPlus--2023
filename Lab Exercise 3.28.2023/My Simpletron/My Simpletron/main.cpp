//Lab Exercise 4/24/2008
//Author: nmessa
#include "Simpletron.h"

int main()
{
	Simpletron cpu;
	cpu.Execute();
	cpu.DumpRegisters();
	cpu.DumpMemory();
	return 0;
}