#include <iostream>
#include <string>
using namespace std;
int main()
{
    // append
    string str = "Nobody is perfect";
    string s = ""; // empty string
    char *ch = "abcdef";
    s.append(str, 0, 6);
    // str က Nobody is perfect"
    // 0 က begin
    // numbers of character
    cout << "s is :" << s << endl;

    // append thow
    string::iterator input1 = str.begin() + 6;
    string::iterator input2 = str.end();
    s.append(input1, input2);
    cout << "s is with iterator: " << s << endl;

    // append three
    s.append(3, '!');
    //! ကို ၃ ခါ ထည့်တာ
    cout << "s is :" << s << endl;

    // append four
    s.append(ch, 3);
    // ch က abc
    cout << "s is :" << s << endl;

    s.append(ch, 3);
    cout << "s is :" << s << endl;
    return 0;
}