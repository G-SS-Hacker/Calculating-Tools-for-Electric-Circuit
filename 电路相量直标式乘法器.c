#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("*****电路相量直标式乘法器*****\n");
    printf("运算: (re1 + j im1) * (re2 + j im2) = ?\n");
    printf("输入: re1 im1 re2 im2\n");

    double re1,im1,re2,im2;
    scanf("%lf%lf%lf%lf",&re1,&im1,&re2,&im2);

    double a1,b1,a2,b2;
    a1 = sqrt(re1*re1+im1*im1);
    b1 = atan(im1/re1)/3.14159*180.0;
    a2 = sqrt(re2*re2+im2*im2);
    b2 = atan(im2/re2)/3.14159*180.0;

    if(im1>0 && re1<0)   b1+=180;
    if(im1<0 && re1<0)   b1-=180;
    if(b1==0 && re1<0)   b1=180;

    if(im2>0 && re2<0)   b2+=180;
    if(im2<0 && re2<0)   b2-=180;
    if(b2==0 && re2<0)   b2=180;

    double as,bs;
    as = a1*a2;
    bs = b1+b2;

    if(bs>180)  bs-=360;
    if(bs<-180) bs+=360;

    printf("极标式:");
    printf("%.2lf ∠ %.2lf\n", as, bs);

    double res,ims;
    res = cos(bs/180.0*3.14159)*as;
    ims = sin(bs/180.0*3.14159)*as;
    printf("直标式: ");
    printf("%.2lf + j%.2lf\n",res,ims); 

    system("pause");
    return 0;
}
