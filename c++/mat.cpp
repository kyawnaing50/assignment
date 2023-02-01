#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int main()
{
    srand;
    int i = 0, j = 0, mat[10][10], a, b;
    cout << "Enter a";
    cin >> a;
    cout << "Enter b";
    cin >> b;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mat[i][j] = rand() % 30 - 10;
        }
    }
    for (i = 0; i < 10; i++)
    {
        cout << endl;
        for (j = 0; j < 10; j++)
        {
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}