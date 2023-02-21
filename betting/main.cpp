#include <iostream>

using namespace std;
const int ch_MAX = 50;
string RandomString(int ch)
{
    char alpha[ch_MAX] = {
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D',
        'U',
        'D'};
    string result = "";
    for (int i = 0; i < ch; i++)
        result = result + alpha[rand() % ch_MAX] + "-";

    return result;
}
int main()
{
    srand(time(NULL));
    int ch = 50;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " " << rand() % RandomString(ch) << "\n";
    }

    return 0;
}