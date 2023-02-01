#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "C++ is best compuyter language";
    string::iterator It = str.begin();
    while (It != str.end()) // စာကြောင်းမဆုံးမချင်းလုပ်မယ်
    {
        if (*It == ' ') // space bar တွေ့တဲ့အခါ
        {
            *It = '\n'; // next line ဆင်းမယ်၊
        }
        cout << *It++; // str ကို စာကြောင်းမဆုံးမချင်း 1 တိုး လုပ်မယ်၊
    }
    cout << endl;

    // ==============================//
    return 0;
}
