// CGT-215-Lab-05-John3823.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	string input;

        vector<char> cipher = {
            'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J',
            'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S',
            'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E'
        };

		cout << "Enter a string to encrypt: ";
		getline(cin, input);

		for (int i = 0; i < input.length(); i++)
		{
			char c = input[i];

			if (c >= 65 && c <= 90)
			{
				cout << cipher[c - 65];
			}
			else if (c >= 97 && c <= 122)
			{
				
				cout << char(cipher[c - 97] + 32);
			}
			else
			{
				cout << c;
			}
		}

}

