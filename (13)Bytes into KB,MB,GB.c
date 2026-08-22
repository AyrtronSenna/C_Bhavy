#include<stdio.h>
void main()
{
    float b,KB,MB,GB;
    printf ("Enter number of bytes");
    scanf ("%f",&b);
    KB=b/1024;
    MB=KB/1024;
    GB=MB/1024;
    printf("\nKb : %f",KB);
    printf("\nMb : %f",MB);
    printf("\nGb : %f",GB);
}
