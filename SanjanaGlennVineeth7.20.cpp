#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int tickets, assign[100], seat[100], randnum = 0, rnum[100];
	cout << "How many tickets do you want?\n";
	cin >> tickets;

	for (int i = 0; i < tickets; i++)
	{
		cout << "Please enter 1 for first class, or 2 for ecomnomy class: ";
		cin >> assign[i];

	}

	for (int k = 0; k < tickets; k++)
	{
		if (assign[k] == 2)
		{
			do
				randnum = rand() % 5 + 6;
			while (rnum[randnum] == 1);
			seat[k] = randnum;
			rnum[randnum] = 1;
		}
		else
		{
			do
				randnum = rand() % 5 + 1;
			while (rnum[randnum] == 1);
			seat[k] = randnum;
			rnum[randnum] = 1;
		}
	}

	
	for (int j = 0; j < tickets; j++)
	{
		if (assign[j] == 1)
			cout << "You have seat " << seat[j] << " in buisness class.\n";
		else
			cout << "You have seat " << seat[j] << " in economy class.\n";
	}
	system("pause");
}