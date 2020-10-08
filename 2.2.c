#include<stdio.h>

void main()
{
    int n2,count=0;
    scanf("%d",&n2);
    long long  n = n2;

    while( n > 1)
    {
        if (n % 2 == 1)
            n = n*3+1;
        else
            n = n / 2;
        count++;

    }
    printf("%d",count);

}
