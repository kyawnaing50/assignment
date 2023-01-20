#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    // clrscr();
    int num = 0, count = 0;
    printf("Enter num : ");
    scanf("%d", &num);

    if (num > 0)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
                printf("%d\n", i);
            }
            else
            {
                // printf("Invalid");
            }
        }
        printf("Upper %d numbers are %d of factor numbers ", count, num);
    }
    else
    {
        printf("Invalid");
    }
    // getch();
    return 0;
}
