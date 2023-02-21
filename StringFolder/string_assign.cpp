#include <iostream>
#include <string>
using namespace std;
int main()
{
    // assign
    string str = "Nobody is Perfect";
    string s = "";
    char *ch = "Robert Frost";

    // assign a copy of str to s;
    s.assign(str);
    cout << "s is :" << s << endl;

    s.assign(str, 10, 7); // perfect
    cout << "s is: " << s << endl;

    // assgn to s a string consisting of the first n character
    s.assign(ch, 6);
    cout << "s is :" << s << endl;

    s.assign(ch);
    cout << "s is :" << s << endl;

    // assigns
    s.assign(str.begin(), str.end());
    cout << " s  is : " << s << endl;

    // assign to s a string consisting of n copies of ch
    s.assign(17, '&');
    cout << " s is " << s << endl;

        return 0;
}
