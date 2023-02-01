#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // clrscr();
    int result = 0, num1 = 0, num2 = 0, limit = 0;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 :");
    scanf("%d", &num2);
    printf("Enter limit :");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        result = num1 + num2;
        printf("%d +", num1);
        num1 = num2;
        num2 = result;
        if (i == limit)
        {
            printf("%d ", num1);
        }
    }
    printf("= %d", result);
    return 0;
}