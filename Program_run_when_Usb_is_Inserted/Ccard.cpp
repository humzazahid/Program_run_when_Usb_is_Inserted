#include<iostream>
#include<string>
#include<fstream>
#include"windows.h"
using namespace std;
int main()
{
again:
	cout << "Plz insert your atm card";
	Sleep(5000);
	system("cls");
	string str, pin;
	int flag = 0;
	do {
		ifstream outFile;
		ofstream inFile;


		outFile.open("g://data.txt");
		outFile >> str;
		if (str.empty())
		{
			goto again;
		}
		else
			flag = 1;
	} while (flag != 1);
	cout << "enter  you 4digit pin\n";
	cin >> pin;
	if (pin == str)
	{
		cout << "Welcome\n";
	}
	system("pause");

}