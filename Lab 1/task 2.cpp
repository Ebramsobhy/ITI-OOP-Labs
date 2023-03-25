#include <iostream>

using namespace std;

int calculate(int a, int b, int c = 20)
{
    return (a + b + c);
}

int main()
{
     cout << calculate(5, 10) << endl;
     cout << calculate(5, 10, 10) << endl;
}
