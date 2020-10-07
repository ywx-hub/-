#include<stdio.h>

void main()
{
    int year;
    scanf("%d",&year);
    if (year == 0)
        printf("year can not be zero!\n");
    if(year%4 == 0 && year%100 != 0)
        printf("yes\n");
    else
        printf("no\n");

}
