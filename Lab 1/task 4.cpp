#include <iostream>

using namespace std;

int a = 10;

int main()
{
    int a = 20;
    cout << a << "\n";
    cout << ::a << "\n";
    return 0;
}
