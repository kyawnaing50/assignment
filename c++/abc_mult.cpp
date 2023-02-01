// #include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a value";
    cin >> a;
    cout << "Enter b ";
    cin >> b;
    cout << "Enter c";
    cin >> c;

    if (b <= c)
    {
        for (int i = b; i <= c; i++)
        {
            cout << a << "*" << i << "=" << a * i << endl;
        }
    }
    else
    {
        for (int i = b; i >= c; i--)
        {
            cout << a << "*" << i << "=" << a * i << endl;
        }
    }
    return 0;
}
