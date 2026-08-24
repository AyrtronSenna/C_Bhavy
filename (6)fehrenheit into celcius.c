#include<stdio.h>
void main()
{
    float F,C;
    printf("Enter temp in fehrenheit :");
    scanf("%f",F);
    C=5*(F-32)/9;
    printf("%0.2f",C);
}
