#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int x = 6, z;
    z = max(x, 4);

    cout << "Max is: " << z << endl;
    z = max(125, 199);
    cout << "Max is: " << z << endl;
    return 0;
}