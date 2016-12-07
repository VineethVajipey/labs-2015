#include <iostream>
#include <cmath>
using namespace std;

void convBin(int n);

int main() {
	int binary, size = 0, decimal = 0;
	
	cout << "Enter a binary number and its size:";
	cin >> binary >>  size;

	for (int j = 0; j < size; j++) {
		if (binary % 10 == 1)
			decimal += pow(2, j);
		binary /= 10;
		
	}

	cout << decimal;
	
	system("pause");
}

void convBin(int n)
{
	if (n / 2 != 0)
	{
		convBin(n / 2);
	}
	cout << n;
}
