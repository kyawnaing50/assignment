// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     FILE *p;
//     char ch;
//     // ofstream myfile;
//     // p = myfile.open("example.txt");
//     p = fopen("example.txt", "r");
//     char str[20] = "Hello Kyaw Naing";
//     // r read
//     // w write
//     // a open file in append mode
//     // r+ open file in read and write mode
//     // w+ open file in read and write mode
//     // a+ open file in read and write mode
//     if (p == NULL)
//     {
//         cout << "File Not Found\n";
//     }
//     else
//     {
//         ch = fgetc(p);
//     }
//     while (ch != EOF)
//     {
//         cout << ch;
//         ch = fgetc(p);
//     }
//     // myfile << "Hello World\n";
//     // myfile.close();
//     return 0;
// }

// ================Another Methood===============?
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int c;
    FILE *fp;
    fp = fopen("example.txt", "r");
    if (fp)
    {
        while ((c = getc(fp)) != EOF)
        {
            putchar(c); // putchar is write function
        }
        fclose(fp);
    }
    return 0;
}