#include <iostream>
#include <string>

using namespace std;
int main()
{
    // next ပုစ္ဆာ
    char *line = "short line for testing";
    // with no arguments
    string s1;
    s1 = "Anatoliy";
    cout << "S1 is: " << s1 << endl;

    // copy the constructor
    string s2(s1);
    // strcpy(s2, s1);ဟု ရေးလည်းရ
    cout << "s2 is :" << s2 << endl;

    // one argument
    string s3(line); // strcpy မလိုဘဲ တန်းထည့်
    // strcpy(s3, line); ဟု ရေးလည်းရတယ်
    cout << "s3 is :" << s3 << endl;

    // first argument C string
    // second argument of characters
    string s4(line, 14);
    cout << "s4 is : " << s4 << endl;

    // 1- C++ string
    // 2- start position
    // 3- number of characters
    string s5(s3, 11, 4); // copy world 'line' from s3
    // s3 ၏ တန်ဖိုး short line for testing
    // 11 သည် character position( 11 ဆိုတော့ e နောက်က space bar နေရာ)
    // 4 သည် number of character
    cout << "s5 is :" << s5 << endl;

    // 1-number character
    // 2- character itself
    string s6(10, 'i'); // * ကို 1000 လုံး ရေးလိုက်တာ
    cout << "s6 is: " << s6 << endl;

    // 1- start iterator
    // 2-character itself
    string s7(s3.begin(), s3.end() - 7);
    //  s3 အစကနေ
    //  s3 အဆုံး
    //  position 7 နေရာ နုတ်မယ်  ။
    cout << "s7 is :" << s7 << endl;

    // you can instantiate string with assignment
    string s8 = "Anatolity";
    cout << "s8 is :" << s8 << endl;

    return 0;
}
