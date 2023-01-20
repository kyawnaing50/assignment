// #include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    // clrscr();
    int arr[10], pEven = 0, pOdd = 0, nEven = 0, nOdd = 0, num = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter num";
        cin >> num;
        arr[i] = num;
    }
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] % 2 == 0)
        {
            if (arr[j] >= 0)
            {
                pEven += arr[j];
            }
            else
                nEven += arr[j];
        }
        else
        {
            if (arr[j] > 0)
                pOdd += arr[j];
            else
                nOdd += arr[j];
        }
    }
    cout << "Positive PositiveEven" << pEven << endl;
    cout << "Positive PositiveOdd" << pOdd << endl;
    cout << "Negative NegativeEven" << nEven << endl;
    cout << "Negative NegativeOdd" << nOdd << endl;
    return 0;
    // getch();
}