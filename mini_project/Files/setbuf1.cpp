#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[] = "Buffer Stream";
    char buffer[BUFSIZ];

    FILE *fp;
    fp = fopen("setbuf.txt", "wb");

    setbuf(fp, buffer);
    fwrite(str, sizeof(str), 1, fp);

    fflush(fp);
    fclose(fp);

    return 0;
}