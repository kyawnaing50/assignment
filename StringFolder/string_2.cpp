#include <iostream>
#include <string>

using namespace std;
int main()
{
    // string str = "Anatoliy Frost";
    // char *ary = new char[str.length() + 1];
    // // strcpy(ary, str);// wrong way
    // strcpy(ary, str.c_str()); // correct way
    // cout << ary << endl;

    //======================================//

    // Capacity

    string str = "C++ is best compuyter language";
    string::size_type cap;
    cap = str.capacity();
    cout << "Capacity of str:" << cap << endl;

    cout << "Size of str: " << str.size() << endl;

    cout << "Length of str :" << str.length() << endl
         << endl;

    cout << "Resize of str for 50 character " << endl;
    str.resize(50);
    cap = str.capacity();

    cout << "Capacity of str:" << cap << endl;
    cout << "Size of str:" << str.size() << endl;
    cout << "Length of str:" << str.length() << endl;
    return 0;
}