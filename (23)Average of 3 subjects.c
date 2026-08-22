#include<stdio.h>
void main()
{
    float s1,s2,s3,avg;
    printf("enter marks of 3 subject");
    scanf("%f %f %f",&s1,&s2,&s3);
    avg=(s1+s2+s3)/3;
    printf("average is %.2f",avg);
}
