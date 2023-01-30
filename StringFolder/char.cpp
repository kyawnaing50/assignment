#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;
    // copy
    strcpy(str3, str1);
    cout << "copy str(str3, str1): " << str3 << endl;
    // concat
    strcat(str1, str2);
    cout << "str concat (str1, str2) : " << str1 << endl;
    cout << "str concat:" << str2 << endl;
    // total length
    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;
    return 0;
}
