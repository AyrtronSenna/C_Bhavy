#include<stdio.h>
void main()
{
    float Ns,Gs,all,ded;
    printf("Enter gross salary ");
    scanf("%f",&Gs);
    all=Gs/10;
    ded=3*Gs/100;
    Ns=Gs+all-ded;
    printf("Net salary is %.2f",Ns);
}
