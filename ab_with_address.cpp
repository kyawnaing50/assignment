#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a, b, c;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("Enter the a and b \n ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("The answer is  %d ", c);
    return 0;
}