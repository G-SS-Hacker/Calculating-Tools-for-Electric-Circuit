#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("*****电路向量极标式加法器*****\n");
    printf("运算: a1 ∠ b1 + a1 ∠ b2 = ?\n");
    printf("输入: a1 b1 a2 b2\n");

    double a1,b1,a2,b2;
    scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);

    double re1,im1,re2,im2;
    re1 = cos(b1/180.0*3.14159)*a1;
    im1 = sin(b1/180.0*3.14159)*a1;
    re2 = cos(b2/180.0*3.14159)*a2;
    im2 = sin(b2/180.0*3.14159)*a2;

    double res,ims;
    res = re1 + re2;
    ims = im1 + im2;
    printf("直标式: ");
    printf("%.2lf + j%.2lf\n",res,ims);

    double as,bs;
    as = sqrt(res*res+ims*ims);
    bs = atan(ims/res)/3.14159*180.0;

    if(ims>0 && res<0)   bs+=180;
    if(ims<0 && res<0)   bs-=180;
    if(bs==0 && res<0)   bs=180;

    printf("极标式:");
    printf("%.2lf ∠ %.2lf\n", as, bs);

    system("pause");
    return 0;
}
