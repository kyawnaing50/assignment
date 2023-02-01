#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main()
{
    int a, i;
    int sum = 0;
    printf("Enter num  ");
    scanf("%d",&a);
    for (i = 0; i < 10; i++)
    {
        sum += a++;
    }
    printf("Answer is %d ", sum);
    return 0;
}