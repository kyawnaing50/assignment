// #include <conio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    // clrscr();
    // randomize();
    int i, arr[10];

    for (i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }
    cout << "\n Randomize Array: ";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
    // getch();
}