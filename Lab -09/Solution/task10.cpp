#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		for (int y = 0; y < 6 - i; y++)
		{
			cout << " ";
		}
		for (int x = 0; x < i+1; x++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
