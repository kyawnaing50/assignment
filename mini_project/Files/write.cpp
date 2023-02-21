#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    FILE *p;
    char ch;
    p = fopen("write.txt", "w");
    char str[20] = "Hello Kyaw Naing";
    if (p)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            putc(str[i], p); //write
        }
    }
    fclose(p);
    return 0;
}