//Class demonstration program
//Author: nmessa
//Date: 2/11/2021

#include "person.h"

int main()
{
	Person joe;
	Person fred("Fred", 37);
	joe.displayPerson();
	fred.displayPerson();
	fred.changeName("Alex");
	for (int i = 1; i <= 1000; i++)
		joe.birthDay();

	joe.displayPerson();
	fred.displayPerson();
	return 0;
}

//Output
//Name: John Doe
//Age: 0
//Name: Fred
//Age: 37
//Name: John Doe
//Age: 1000
//Name: Alex
//Age: 37