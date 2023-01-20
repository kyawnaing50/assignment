#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float a, b, c = 0;

    printf("Enter the a and b \n ");
    scanf("%f%f", &a, &b);

    c = a / b;

    printf("%f / %f = %f", a, b, c);
    return 0;
}