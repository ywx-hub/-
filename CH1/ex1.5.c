#include<stdio.h>

void main()
{
     int n;
     float cost;
     scanf("%d",&n);
     if (n*95 >= 300)
        cost = n*95*0.85;
     else
        cost = n*95;
     printf("%.2f",cost);


}
