#include<stdio.h>
#include<math.h>

//cos &sinª°∂»÷∆

void main()
{
       double n;
       const double pi = acos(-1.0);

       scanf("%lf",&n);
       n = n/180*pi;

       printf("%lf\n",cos(n));
       printf("%lf\n",sin(n));

}
