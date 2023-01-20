#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int num = 1, A = 1;
    printf("Enter num : ");
    scanf("%d", &num);

    if (num > 0)
    {
        for (int i = 1; i <= num; i++)
        {
            A = A * i;
            if (i == num)
            {
                printf("%d = %d ", i, A);
            }
            else
            {
                printf("%d * ", i);
            }
        }
    }
    return 0;
}