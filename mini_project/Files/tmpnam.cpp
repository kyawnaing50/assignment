#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    char filename1[L_tmpnam], filename2[L_tmpnam];
    tmpnam(filename1);
    tmpnam(filename2);
    cout << "Temporary filenames:" << endl;
    cout << "1." << filename1 << endl;
    cout << "2." << filename2 << endl;

    /* when null is passed*/
    char *filename3 = tmpnam(NULL);
    cout << "3." << filename3;

    return 0;
}