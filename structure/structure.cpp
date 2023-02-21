#include <iostream>
#include <cstring>
#include <iomanip>
#include <ios>
using namespace std;

struct
{
    string name;
    int age;
    float salary;
} Person;
int main()
{
    int x1 = 12345, x2 = 23456, x3 = 7892;

    // Person p1;
    cout << "Enter name:";
    getline(cin, Person.name);
    // cin.get(Person.name, 50);
    cout << "Enter age: ";
    cin >> Person.age;
    cout << "Enter salary: ";
    cin >> Person.salary;

    cout << "\nDisplay: " << endl;
    cout << setw(8) << "Name:"
         << setw(8) << "Age: "
         << setw(8) << "Salary: " << endl;
    cout << setw(8) << Person.name
         << setw(8) << Person.age << setw(8) << Person.salary << endl;

    // cout << setw(8) << "E1234567" << setw(20) << x1 << endl;
    // cout << setw(8) << "S1234567" << setw(20) << x2 << endl;
    // cout << setw(8) << "A1234567" << setw(20) << x3 << endl;

    // cout << "Age:" << Person.age << endl;
    // cout << "Salary:" << Person.salary << endl;

    return 0;
}