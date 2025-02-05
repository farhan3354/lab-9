#include<iostream>

using namespace std;

int main()
{
	int multi;
	for (int i = 1; i < 6; i++)
	{
		for (int y = 1; y < 6; y++)
		{
			multi = y * i;
			cout << multi;
			cout << " ";
		}
		cout << '\n';
	}

}