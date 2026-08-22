#include<stdio.h>
void main()
{
    float L,B,A,P;
    printf("Enter L : ");
    scanf("%f",&L);
    printf("Enter B : ");
    scanf("%f",&B);
    A=L*B;
    P=2*(L+B);
    printf("Area is %f",A);
    printf("\nPerimeter is %f",P);

}
