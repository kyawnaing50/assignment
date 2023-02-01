#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "geeksforgeeks is geeks";

    // Display
    cout << "Initial is:";
    cout << str << endl;

    // Resize
    str.resize(13);

    // Display
    cout << "string after resize:";
    cout << str << endl;

    // Display
    cout << "The string after: ";
    cout << str << endl;

    // Display capacity

    cout << "Capacity: ";
    cout << str.capacity() << endl;

    // Display length
    cout << "Length:";
    cout << str.length() << endl;

    // Display string
    str.shrink_to_fit();
    cout << "New capacity:";
    cout << str.capacity() << endl;

    return 0;
}