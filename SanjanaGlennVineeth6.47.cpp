#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main() {

	int num1 = 0, num2 = 0, grade, type, tubs;
	double answer;

	srand(time(NULL));

	cout << "What arithmetic problems do you wish to study?\n" << "Addition(1)/Subtraction(2)/Mulitplication(3)/Division(4)/Mixed(5)\n";

	cin >> type;

	cout << "Enter your grade level capability:\n";

	cin >> grade;

	while(1){
	tubs = pow(10, grade) - pow(10, grade - 1);

	num1 = rand() % tubs + pow(10, grade-1);

	do
		num2 = rand() % (tubs) + pow(10, grade-1);
	while (num2 > num1);

	if (type > 5 || type <= 0 || grade <= 0)
		cout << "Dont do dat!";

	if (type == 5) {
		do

			type = rand() % 5;

		while (type == 0);

		if (type == 1) {

			cout << "How much is " << num1 << " plus " << num2 << "?\n";

			cin >> answer;

			while (answer != num1 + num2) {
				cout << "No. Please try again.\n";
				cin >> answer;
			}

			cout << "Very good!\n";
		}

		if (type == 2) {

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

		if (type == 4) {

			cout << "How much is " << num1 << " divided by " << num2 << "?\n";

			cin >> answer;

			while (answer != num1 / num2) {
				cout << "No. Please try again.\n";
				cin >> answer;
			}

			cout << "Very good!";
		}
	}
	}
	}