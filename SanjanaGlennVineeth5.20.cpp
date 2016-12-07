#include <iostream>
using namespace std;

int main()
{

	for (int hypo = 1; hypo < 501; hypo++)
		for (int b = 1; b < 501; b++)
			for (int a = 1; a < 501; a++)
				if (pow(hypo, 2) == pow(b, 2) + pow(a, 2))
					cout << b << " " << a << " " << hypo << endl;






	system("pause");
}