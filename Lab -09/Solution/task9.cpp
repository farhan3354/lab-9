#include<iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int x = 1; x < 6-i; x++)
        {
            cout << " ";
        }
        for(int y = 1; y < i+2; y++)
        {
            cout << y;
        }
        for(int y = i; y >= 1; --y)
        {
            cout << y;
        }
        cout << "\n";
    }
}
