#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string for testing: ";
    cin >> str;
    cout << "\nTesing is :" << str << endl;

    cout << "Enter string for testing "
         << "(d to quit:" << endl;

    while (cin >> str) // ဝင်လာသမျှကို ဖမ်းတာ၊ Space bar ပါရင် next line ဆင်းမယ် ။
    {
        cout << endl;
        cout << "String is :" << str << endl;
        cout << "Enter string for testing "
             << "(d to quit:" << endl;
    }
    return 0;
}
