#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    // string str;
    cout << "Enter:";
    cin.get(str, 100);
    cout << "Entered:" << str << endl;

    return 0;
}