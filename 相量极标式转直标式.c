#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("*****极标式转直标式*****\n");
    printf("Input: a b\n");

    double a,b;
    scanf("%lf%lf",&a,&b);

    double re,im;
    re = cos(b/180.0*3.14159)*a;
    im = sin(b/180.0*3.14159)*a;
    printf("%.2lf %.2lf\n",re,im);

    system("pause");
    return 0;
}
