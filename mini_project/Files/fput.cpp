#include <cstdio>

using namespace std;
int main()
{
    char str[] = "Learning to Program";
    FILE *fp;
    fp = fopen("fput.txt", "w");
    if (fp)
    {
        fputs(str, fp);
    }
    else
        perror("Fail");

    fclose(fp);
    return 0;
}