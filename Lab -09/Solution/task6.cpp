#include<iostream>

using namespace std;

int main()
{
	int multi;
	for (int i = 1; i < 6; i++)
	{
		for (int y = 6-i; y > 0; y--)
		{
			cout << " ";
		}
		for (int y = 1; y < i+1; y++)
		{
			cout << "*";
		}
		for (int y = 2; y < i + 1; y++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = 1; i < 6; i++)
	{
		for (int y = 1; y < i + 1; y++)
		{
			cout << " ";
		}
		for (int y = 0 ; y < 6-i; y++)
		{
			cout << "*";
		}
		for (int y = 1; y < 6 - i; y++)
		{
			cout << "*";
		}
		
		cout << '\n';
	}
}