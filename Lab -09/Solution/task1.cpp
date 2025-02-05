#include<iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int y = 1; y < i + 2; y++)
		{
			cout << y;
		}
		cout << '\n';
	}

}