#include <iostream>
using namespace std;
double avg(int n1, int n2)
{
    double sum = n1 + n2;
    return sum / 2.0;
}
int main()
{
    int x = 6, y = 9;
    double z;
    z = avg(x, y);
    cout << "AVG is: " << z << endl;
    z = avg(x, 2);
    cout << "AVG is: " << z << endl;
    return 0;
}