#include<stdio.h>
void main()
{
    float Ns,Gs;
    printf("Enter gross sales ");
    scanf("%f",&Gs);
    Ns=Gs-(Gs/10);
    printf("Net sales : %.2f",Ns);
}
