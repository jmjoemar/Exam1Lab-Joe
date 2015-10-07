// Exam Lab 1 
// Joseph Martinez



#include <iostream>
#include <string>
#include "compare.h"

using namespace std;


int main()
{
	int var1, var2;
	
	cout << "Enter first number"<< endl;			// attains the variable to be used and comparied
	cin >> var1;
	cout << "Enter second number"<< endl;			
	cin >> var2;
	
	char result = compare(var1, var2);
	
	if (result == "=")
	{
		cout << var1 << "is = to" << var2;		// uses the result returned from the .cpp furction to format the 'cout'
	}
	else if (result == ">" )
	{
		cout << var1 << "is > then" << var2;
	}
	else if (result == "<")
	{
		cout << var1 << "is < then" << var2;
	}

	return 0;
}



