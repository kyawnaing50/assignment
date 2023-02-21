#include <iostream>
#include <cstring>
#include <iomanip>
#include <ios>
using namespace std;

struct
{
    int roll_no;
    string name;
    int phone;
} myPerson[5];
int main()
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "STUDENT:" << i + 1 << endl;
        cout << "ROLL NO :" << endl;
        cin >> myPerson[i].roll_no;
        cout << "Name:" << endl;
        cin >> myPerson[i].name;
        cout << "Phone:" << endl;
        cin >> myPerson[i].phone;
    }

    cout << "Answer are :" << endl
         << endl;
    cout << setw(8) << "ROLL:"
         << setw(8) << "NAME "
         << setw(8) << "PHONE" << endl;
    // for (i = 0; i < 5; i++)1
    // {
    //     cout << setw(8) << myPerson[i].roll_no
    //          << setw(8) << myPerson[i].name
    //          << setw(8) << myPerson[i].phone << endl;
    // }
    i = 0;
    while (i < 2)
    {
        cout << setw(8) << myPerson[i].roll_no
             << setw(8) << myPerson[i].name
             << setw(8) << myPerson[i].phone << endl;
        i++;
    }

    return 0;
}