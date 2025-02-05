#include<iostream>

using namespace std;

int main()
{
	int multi;
	for (int i = 1; i < 6; i++)
	{
		for (int y = 1; y < 6; y++)
		{
			if (i != 1 && i != 5)
			{
				if (y < 5 && y > 1)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			else
			{
				cout << "*";
			}

		}
		cout << '\n';
	}

}