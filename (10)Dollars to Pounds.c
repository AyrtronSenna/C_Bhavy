#include<stdio.h>
void main()
{
    float Rs,D,P;
    printf("Enter Number of Dollars ");
    scanf("%f",&D);
    Rs=D/48;
    P=70*Rs;
    printf("%.2f Pounds",P);
}
