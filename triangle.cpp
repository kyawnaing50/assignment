#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float x, y, A;
    cout << "Enter base and height ";
    // printf("Enter base and height  ");
    scanf("%f%f", &x, &y);

    A = (x * y) / 2;

    printf("The area of Triangle is  %f", A);
    return 0;
}