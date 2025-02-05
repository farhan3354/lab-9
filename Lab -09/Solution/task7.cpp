#include<iostream>

using namespace std;

int main()
{

	while (true)
	{
		std::cout << "1: Print help " << std::endl;
		// ... more options here
		int userOption;
		std::cout << "Type in 1-6" << std::endl;
		std::cin >> userOption;
		if (userOption == 1)
		{
			std::cout << "Help- choose options from the menu" << std::endl;
			std::cout << "and follow the on screen instructions." << std::endl;
		}
		if (userOption == 2)
		{
			std::cout << "Help- choose options from the menu" << std::endl;
			std::cout << "and follow the on screen instructions." << std::endl;
		}
		if (userOption == 3)
		{
			std::cout << "Help- choose options from the menu" << std::endl;
			std::cout << "and follow the on screen instructions." << std::endl;
		}
		if (userOption == 4)
		{
			std::cout << "Help- choose options from the menu" << std::endl;
			std::cout << "and follow the on screen instructions." << std::endl;
		}
	}



	for (int i = 0; i < 5; i++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (i % 2 != 0)
			{
				if (y % 2 != 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{
				if (y % 2 != 0)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << "\n";
	}
}