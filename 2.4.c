#include<stdio.h>
#include<time.h>

void main()
{
    const int MOD = 1000000;
    int n;
    int sum = 0;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int term = 1;
        for (int j = 1 ;j <= i; j++)
        {
            term = term * j % MOD;
        }
        sum = (sum + term) % MOD;
    }

    printf("%d\n",sum);
    printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);

}
