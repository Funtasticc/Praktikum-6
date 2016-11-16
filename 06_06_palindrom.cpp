#include <iostream>
#include <string>

using namespace std;

int main()
{
	string palindrom = "";
	int reverseCounter = 0;
	char c;
	bool isPalindrom = true, invalid = true;

	do
	{
		cout << "Text = ? ";
		getline(cin, palindrom);

		for (int i = 0; i < palindrom.length(); i++)
		{
			c = palindrom[i];
			if (c >= 'A' && c <= 'Z')
			{
				palindrom[i] = c + 32;
				invalid = false;
			}
			else if (c >= 'a' && c <= 'z') invalid = false;
			else
			{
				invalid = true;
				break;
			}
		}

	} while (invalid);


	reverseCounter = palindrom.length();
	for (int i = 0; i < palindrom.length(); i++)
	{
		c = palindrom[i];

		if (isPalindrom)
		{
			if (c == palindrom[reverseCounter - 1]) isPalindrom == true;
			else
			{
				isPalindrom = false;
				break;
			}
		}

		reverseCounter--;
	}

	if (isPalindrom == true) cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	else cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;

	system("pause");
	return 0;
}
