#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int seats[10], fors, i = 0, loop;
	srand(time(NULL));
	
	cout << "How many tickets?";

	cin >> loop;

	for(int a = 0; a < loop; a++) {
		cout << "What class?";

		cin >> fors;

		if (fors == 1) {
			
			while (seats[i] == 1)
				i = rand() % 5 + 5;
			seats[i] = 1;

			cout << "You got seat " << i + 1 << endl;

		}



		if (fors == 2) {
			
			while (seats[i] == 1)
				i = rand() % 5;
			seats[i] = 1;

			cout << "You got seat " << i + 1 << endl;

		}
	}

	system("pause");
}