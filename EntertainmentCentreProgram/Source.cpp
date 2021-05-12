#include <string>
#include <iostream>
using namespace std;

int main()
{
	int userChoice;
	
	do
	{
		cout << "+--------------------+" << endl;
		cout << "|ENTERTAINMENT CENTRE|" << endl;
		cout << "+--------------------+" << endl;

		cout << "0. Exit" << endl;
		cout << "1. Quote of the Day" << endl;

		cin >> userChoice;

		switch (userChoice)
		{
		case 0:
			system("CLS");
			cout << "bye-bye!\n";
			return 0;
		case 1:
			system("CLS");
			cout << "animations deez nuts, gottem!\n";
			break;
		}
	}
	while (userChoice != 0);
}