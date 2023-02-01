#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;

    cout << "Enter string :";
    getline(cin, str);

    cout << "Initial is";
    cout << str << endl;

    // Inserting
    str.push_back('s');
    cout << "after push_back: ";
    cout << str << endl;

    // Deleting
    str.pop_back();
    cout << "after popback:";
    cout << str << endl;

    return 0;
}