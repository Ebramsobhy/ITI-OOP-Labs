#include <iostream>

using namespace std;

void Add(int a, int b)
{
    cout << "Sum = " << (a + b) <<"\n";
}

void Add(float a, float b)
{
    cout << "Sum = " << (a + b) <<"\n";
}
int main()
{
   Add(5 , 5);
   Add(2.5f , 2.5f);
   return 0;
}
