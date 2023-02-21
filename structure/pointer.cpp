#include <iostream>
using namespace std;
struct Length
{
    string meters;
    string centimeters;
};
int main()
{

    Length *ptr, l;
    ptr = &l;
    //  cout << "meter:";
    (*ptr).meters = "1000 9000";
    // cin >> (*ptr).meters;
    // cout << "centimeters:";
    (*ptr).centimeters = "5000 7000";
    // cin >>(*ptr).centimeters;
    cout << "Length =>" << endl
         << (*ptr).meters << " meter " << endl
         << (*ptr).centimeters << " centimeter";
    return 0;
}