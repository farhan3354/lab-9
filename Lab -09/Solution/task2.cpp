#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int y = 5-i; y > 0; y--)
		{
			cout << "*";
		}
		cout << '\n';
	}

}