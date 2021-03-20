#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	int year;
	
    cout << "Enter a year here: ";
	cin >> year;


	if ( year % 4 == 0 && year % 100 !=0 )
	{

		cout << endl << "This is a leap year !";

	}

	else if (year % 400 == 0)
	{

		cout << endl << "This is a leap year !";

	}

	else
	{

		cout << endl << "This is not a leap year !";
	}


	_getch();


}
