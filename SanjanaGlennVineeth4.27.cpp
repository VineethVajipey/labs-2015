#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int binary, size = 0, decimal = 0;

	cout << "Enter a binary number and its size:";
	cin >> binary >> size;

	for (int j = 0; j < size; j++) {
		if (binary % 10 == 1)
			decimal += pow(2, j);
		binary /= 10;

	}

	cout << decimal << endl;

	system("pause");
}

