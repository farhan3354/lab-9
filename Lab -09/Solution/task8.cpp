#include <iostream>

using namespace std;

int main()
{
  int cur=1,pas=0,temp=1;
  cout << " 0" << "\n";
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 2+i; j++)
    {
    cout << " " <<temp;
    temp = cur+pas;
    pas = cur;
    cur = temp;
    }
    cout << "\n";
  }
}
