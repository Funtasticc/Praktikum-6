#include <iostream>
using namespace std;

int main()
{
	int z[5];
	for (int i = 1; i <= 5; i++)
	{
		cout << "Bitte geben Sie die " << i << ". Zahl ein: ? ";
		cin >> z[i - 1];
		if (z[i - 1] < 1 || z[i - 1] > 9)
			i--;
	}

	for (int p = 9; p > 0; p--)
	{
		cout << p;
		for (int f = 0; f < 5; f++)
		{
			if (int(z[f]) == (p))
				cout << "*";
			else if (int(z[f]) > (p))
				cout << ".";
			else if (int(z[f]) < (p))
				cout << " ";
		}
		cout << endl;
	}
	cout << " 12345" << endl;
	system("PAUSE");
}
