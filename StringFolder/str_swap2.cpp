#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "geeksforgeeks is for geeks";

    string str2 = "geeksforgeeks rock";

    char ch[80];

    str1.copy(ch, 20, 0);

    cout << "new copy:";
    cout << ch << endl;

    cout << "1st string before:";
    cout << str1 << endl;
    cout << "2nd string before:";
    cout << str2 << endl;

    str1.swap(str2);

    cout << "1st string after:";
    cout << str1 << endl;
    cout << "2nd string after:";
    cout << str2 << endl;

    return 0;
}