#include <iostream>

using namespace std;

struct Employee
{
     int id;
     char name[20];
     int salary;
};

int main()
{
    int n;
    cout << "Enter The Number Of Employee" <<"\n";
    cin >> n;

    Employee *p = new Employee[n];

    for(int i=0;i<n;i++)
    {
        cout <<"ID: ";
        cin >> p[i].id;
        cout <<"Name: ";
        cin >> p[i].name;
        cout <<"Salary: ";
        cin >> p[i].salary;
    }

    for(int i=0;i<n;i++)
    {
        cout << p[i].id << "\n";
        cout << p[i].name << "\n";
        cout << p[i].salary << "\n";
    }

    return 0;
}
