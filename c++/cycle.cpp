#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float pi = 3.142;
    float A, r;
    cout << "enter radius value:";
    cin >> r;
    A = pi * pow(r, 2);
    cout << "Area of circle:" << A;
    return 0;
}
