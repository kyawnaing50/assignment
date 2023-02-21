#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int c;
    FILE *fp;
    fp = fopen("example.txt", "a");
    char str[400] = "23";
    if (fp)
    {
        putc('\n', fp);
        for (int i = 0; i < strlen(str); i++)
        {
            putc(str[i], fp); // putc is write function
        }
    }
    fclose(fp);
    return 0;
}