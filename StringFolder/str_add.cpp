#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello";
    cout << "str is :" << str << endl;

    str += ",";
    str += " ";
    cout << "str is with coma and spacebar : " << str << endl;

    string s;
    s = str + "Kyaw Naing";
    cout << "s is: " << s << endl;

    char ch = '!';
    s += ch;
    s += ' ';
    s += "Nice to meet you.";
    cout << "s is with Exclamation Notation: " << s << endl;

    return 0;
}