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
		cout << p;							// eingaben sind z[1] = 9, z[2] = 7, z[3] = 5, z[4] = 2; z[5] = 9;
											// 9*   *	
											// 8.	.
											// 7.*	.
											// 6..	.
											// 5..*	.
											// 4...	.
											// 3...	.
											// 2...*.
											// 1.....
											//  12345
		for (int f = 0; f < 5; f++)			//erst wird mit z[1] 9 gepfrüft, da z[1] == p (9) in dem Fall ist, wird ein * geschrieben
											//dann wird mit z[2] 7 gepfrüft, da z[2] < p (9) ist, wird " " geschrieben
											//dann wird mit z[3] 5 gepfrüft, da z[3] < p (9) ist, wird " " geschrieben
											//dieser Vorgang wird 9 mal durchgeführt und jedesmal wird p um 1 kleiner, 8...7...6... usw.
		{
			if (int(z[f]) == (p))			//wenn z[1] == p ist, wird ein Sternchen * gemacht
				cout << "*";
			else if (int(z[f]) > (p))		//wenn z[1] größer als p ist, wird ein Punkt gemacht							
				cout << ".";				
			else if (int(z[f]) < (p))		//wenn z[1] kleiner als p ist, wird " " geschrieben, also nichts
				cout << " ";
		}
		cout << endl;
	}
	cout << " 12345" << endl;
	system("PAUSE");
}
