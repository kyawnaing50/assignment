#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1;
    // char s[];
    // string ss;
    char str[100];

    cout << "Enter string :";
    getline(cin, str1);

    cout << "Enter next string:";
    cin.get(str, 100, '\n');

    cout << "Entered char array:" << str1 << endl;
    // display(str1);
    cout << "Entered string: " << str << endl;
    return 0;
}
// void display(char s[])
// {
//     cout << "Entered char array:" << s << endl;
// }