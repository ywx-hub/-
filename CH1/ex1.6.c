#include<stdio.h>

void main()
{
    int a,b,c;
    int n;
    scanf("%d%d%d",&a,&b,&c);

    //guarantee a>b>c
    if (a<b)
       {n=b;b=a;a=n;}
    if (a<c)
       {n=a;a=c;c=n;}
    if (b<c)
        {n=c;c=b;b=n;}

    if (a*a==b*b+c*c)
        printf("yes");
    else
        printf("no");

    if (a>= (b+c) )
        printf("not a  triangle");

}
