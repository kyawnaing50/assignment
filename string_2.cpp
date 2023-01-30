#include <iostream>
#include <string>

using namespace std;
int main()
{
    
    // assign
    // string str = "Nobody is Perfect";
    // string s = "";
    // char *ch = "Robert Frost";

    // // assign a copy of str to s;
    // s.assign(str);
    // cout << "s is :" << s << endl;

    // s.assign(str, 10, 7); // perfect
    // cout << "s is: " << s << endl;

    // // assgn to s a string consisting of the first n character
    // s.assign(ch, 6);
    // cout << "s is :" << s << endl;

    // s.assign(ch);
    // cout << "s is :" << s << endl;

    // //assigns
    // s.assign(str.begin(), str.end());
    // cout << " s  is : " << s << endl;

    // //assign to s a string consisting of n copies of ch
    // s.assign(17, '&');
    // cout << " s is " << s << endl;

    //==================================================//

    // at 1
    // string s = "Nobody is perfect";
    // // Return s[pos]
    // for (int pos = 0; pos < s.length(); ++pos)
    // {
    //     cout << s.at(pos) << " ";
    // }
    //==============================================//

    // string str = "C++ is best compuyter language";
    // string::iterator It = str.begin();
    // while (It != str.end()) // စာကြောင်းမဆုံးမချင်းလုပ်မယ်
    // {
    //     if (*It == ' ') // space bar တွေ့တဲ့အခါ
    //     {
    //         *It = '\n'; // next line ဆင်းမယ်၊
    //     }
    //     cout << *It++; // str ကို စာကြောင်းမဆုံးမချင်း 1 တိုး လုပ်မယ်၊
    // }
    // cout << endl;

    //==============================//

    // string str = "Anatoliy Frost";
    // char *ary = new char[str.length() + 1];
    // // strcpy(ary, str);// wrong way
    // strcpy(ary, str.c_str()); // correct way
    // cout << ary << endl;

    //======================================//

    // Capacity

    string str = "C++ is best compuyter language";
    string::size_type cap;
    cap = str.capacity();
    cout << "Capacity of str:" << cap << endl;

    cout << "Size of str: " << str.size() << endl;

    cout << "Length of str :" << str.length() << endl
         << endl;

    cout << "Resize of str for 50 character " << endl;
    str.resize(50);
    cap = str.capacity();

    cout << "Capacity of str:" << cap << endl;
    cout << "Size of str:" << str.size() << endl;
    cout << "Length of str:" << str.length() << endl;
    return 0;
}