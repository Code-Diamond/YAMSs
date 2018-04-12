#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

char numbers[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char lowerCase[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char upperCase[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
char specialChar[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+' };
char evenMoreSpecial[] = { (char)156, (char)182, (char)240, (char)248, (char)142, (char)232, (char)240, (char)231, (char)253, (char)254, (char)255, (char)201, (char)202, (char)203, (char)204 };
string whatCipherSaw[] = { "BLONDE", "BRUNETTE", "REDHEAD" };

int main()
{
	srand(time(NULL));
	system("CLS");
	int a, b, c;
	bool switcher = false;

	//Set color to green
	system("Color 0A");
	switcher = true;
	for(int i = 0; true; i++)
	{
		a = rand() % 7;

		switch(a)
		{
			case 0:
				b = rand() % 10;
				cout << numbers[b] << "   ";
				break;
			case 1:
				b = rand() % 26;
				cout << lowerCase[b] << " ";
				break;
			case 2:
				b = rand() % 26;
				cout << upperCase[b] << "  ";
				break;
			case 3:
				b = rand() % 12;
				cout << specialChar[b] << "";
				break;
			case 4:
				b = rand() % 15;
				cout << evenMoreSpecial[b] << "     ";
				break;
			case 5:
				b = rand() % 30;
				if(b==0)
				{
					c = rand() % 3;
					cout << whatCipherSaw[c] << " ";
				}
				break;
			case 6:
				b = rand() % 50;
				if(b == 0)
				{
					if(switcher)
					{
						system("Color 07");
						switcher = false;
					}
					else
					{
						system("Color 0A");
						switcher = true;
					}
					
					cout << "_WHITE_RABBIT_";
				}
		}
		if(i > 3000)
			Sleep(1);
	}


	

	return 0;
}