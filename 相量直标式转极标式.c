#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("*****直标式转极标式*****\n");
    printf("Input: re im\n");

    double re,im;
    scanf("%lf%lf",&re,&im);

    double a,b;
    a = sqrt(re*re+im*im);
    b = atan(im/re)/3.14159*180.0;

    if(im>0 && re<0)   b+=180;
    if(im<0 && re<0)   b-=180;
    if(b==0 && re<0)   b=180;

    printf("%.2lf %.2lf\n",a,b);

    system("pause");
    return 0;
}
