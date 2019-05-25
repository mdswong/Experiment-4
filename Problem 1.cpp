#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	int operation, firstnum, secondnum;
	char answer;
	
	cout << "MENU: \n";
	cout << "1. Add \n";
	cout << "2. Subtract \n";
	cout << "3. Multiply \n";
	cout << "4. Divide \n";
	cout << "5. Modulus \n";
	
	do
	{
	cout << endl;
	cout << "Enter the number of selected operation: "; cin >> operation;
	cout << "Input first number: "; cin >> firstnum;
	cout << "Input second number: "; cin >> secondnum;
	
	switch (operation)
	{
	case 1: 
	cout << "Result: " << firstnum + secondnum << endl;
	break;
	case 2: 
	cout << "Result: " << firstnum - secondnum << endl;
	break;
	case 3:
	cout << "Result: " << firstnum * secondnum << endl;
	break;
	case 4:
	cout << "Result: " << firstnum / secondnum << endl;
	break;
	case 5:
	cout << "Result: " << firstnum % secondnum << endl;
	break;
	default:
	cout << "ERROR";
	break;
	}
	
	cout << endl;
	cout << "Continue? (Y/N)"; cin >> answer;
	cout << endl;
	
  }
    
	while (answer == 'y'|| answer == 'Y');
	
	return 0;
}
