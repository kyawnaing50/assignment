#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "ABCDEFGHIJKL";
    while (!str.empty())
    {
        cout << str << endl;
        str.erase(str.end() - 1); // str အဆုံးကနေ တစ်လုံးချင်း ဖျက်တာ။
    }
    cout << endl;
    return 0;
}