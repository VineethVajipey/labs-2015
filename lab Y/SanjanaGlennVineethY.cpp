#include <iostream>
#include <ctime>
using namespace std;

int main() {

	int num1, num2, answer, grade, type, y;

	srand(time(NULL));

	cout << "What arithmetic problems do you wish to study?\n" << "Addition(1)/Subtraction(2)/Mulitplication(3)/Division(4)/Mixed(5)\n";

	cin >> type;

	while (type > 5 || type < 1) {

		cout << "Your entry is not valid. Please enter another number.";

		cin >> type;

	}

	cout << "Enter your grade level capability:\n";

	cin >> grade;

	int y = 9 * pow(10, grade - 1);

	if (type > 5 || type <= 0 || grade <= 0)
		cout << "Dont do dat!";

	while (num2 > num1) {
		num1 = rand() % y + y / 9;
		num2 = rand() % y + y / 9;
	}


	if (type == 5) {
	do

	type = rand() % 5;

	while (type == 0);

	if(type == 1) {

		cout << "How much is " << num1 << " plus " << num2 << "?\n";

		cin >> answer;

		while (answer != num1 + num2) {
			cout << "No. Please try again.\n";
			cin >> answer;
		}

		cout << "Very good!\n";
	}
	
	if(type == 2) {

		cout << "How much is " << num1 << " minus " << num2 << "?\n";

		cin >> answer;

		while (answer != num1 - num2) {
			cout << "No. Please try again.\n";
			cin >> answer;
		}

		cout << "Very good!\n";
	}

	if (type == 3) {

		cout << "How much is " << num1 << " times " << num2 << "?\n";

		cin >> answer;

		while (answer != num1 * num2) {
			cout << "No. Please try again.\n";
			cin >> answer;
		}

		cout << "Very good!\n";
	}

	if(type == 4) {

		cout << "How much is " << num1 << " divided by " << num2 << "?\n";

		cin >> answer;

		while (answer != num1 / num2) {
			cout << "No. Please try again.\n";
			cin >> answer;
		}

		cout << "Very good!\n";
	}

	
		
	system("pause");
}