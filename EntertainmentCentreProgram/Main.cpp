#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playQuote()
{
	int alreadyDone = 8;

	int random = rand() % 4;

	cout << "+--------------------+" << endl;
	cout << "|  QUOTE OF THE DAY  |" << endl;
	cout << "+--------------------+" << endl;
	
	if (alreadyDone == random)
	{
		random = rand() % 4;
	}

	if (alreadyDone != random)
	{
		switch (random)
		{
		case 0:
			cout << "thou testicles\n";
			alreadyDone = random;
			system("pause");
			break;
		case 1:
			cout << "deez nuts\n";
			alreadyDone = random;
			system("pause");
			break;
		case 2:
			cout << "these balls\n";
			alreadyDone = random;
			system("pause");
			break;
		case 3:
			cout << "my bollox\n";
			alreadyDone = random;
			system("pause");
			break;
		case 4:
			cout << "sicko mode\n";
			alreadyDone = random;
			system("pause");
			break;
		}
	}
}

int main()
{
	srand(time(NULL));
	int userChoice;
	
	do
	{
		system("CLS");
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
			playQuote();
			break;
		}
	}
	while (userChoice != 0);
}

