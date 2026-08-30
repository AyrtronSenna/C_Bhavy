#include<stdio.h>
void main()
{
    float a,b,sum,mul,sub,div;
    printf("Enter A ");
    scanf("%f",&a);
    printf("Enter B ");
    scanf("%f",&b);
    sum=a+b;
    mul=a*b;
    sub=a-b;
    div=a/b;
    printf("Sum is %.2f",sum);
    printf("\nMultiplication is %.2f",mul);
    printf("\nSubtraction is %.2f",sub);
    printf("\nDivision is %.2f",div);
}
