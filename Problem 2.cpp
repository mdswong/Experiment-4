#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n, i, j, element;
	
	cout << "Selection Sorting...";
	cout << endl;
	cout << "Enter the array size: "; cin >> n;
	
	int A[n];
	cout << "Enter the " << n << " elements: \n\n";

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				element = A[j];
				A[j] = A[j + 1];
				A[j + 1] = element;
			}
		}
	}
	
	cout << "\nAfter using selection or bubble sort...";
	cout << "\n\nSorted data: ";
	
	for (i = 0; i < n; i++)
	{
		cout<< A[i] << " ";
	}
	
	cout << endl;
	
	_getch();
	return 0;
}
