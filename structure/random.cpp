#include <iostream>
#include <time.h>

using namespace std;
const int ch_MAX = 2;

string RandomString(int ch)
{
    char alpha[ch_MAX] = {'A', 'B'};
    string result = "";
    for (int i = 0; i < ch; i++)
    {
        result = result + alpha[rand() % ch_MAX] + " ";
    }
    return result;
}
int main()
{
    string str;
    string str2;
    string str3;
    srand(time(0));
    int ch = 3;                 // 5 teams==> team*
    for (int i = 0; i < 6; i++) // teams*times
    {
        cout << RandomString(ch) << "\n";
    }
    cout << "Str: " << str << endl;
    return 0;
}