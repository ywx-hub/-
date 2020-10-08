#include<stdio.h>
#include<math.h>
/*
void main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        printf("%d\n",i);

}
*/

void main()
{
    for (int a = 1; a <= 9 ; a++)
        for (int b=0; b <= 9; b++)
        {
            int m = a*1100 + b*11;
            int  n = floor(sqrt(m) + 0.5);
            if (n*n == m)
                printf("%d\n",m);
        }
}
