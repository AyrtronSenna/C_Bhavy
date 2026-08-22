#include<stdio.h>
void main()
{
    int p,r,n,i;
    printf("Enter P");
    scanf("%d",&p);
    printf("Enter R");
    scanf("%d",&r);
    printf("Enter N");
    scanf("%d",&n);

    i=p*r*n/100;
    printf("Interest is : %d ",i);
}
