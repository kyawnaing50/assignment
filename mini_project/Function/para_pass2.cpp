#include <iostream>
using namespace std;

void inc(int x)
{
    x = x + 1;
    cout << " X is: " << x << endl;
}
int main()
{
    int x = 9;
    inc(x);
    return 0;
}