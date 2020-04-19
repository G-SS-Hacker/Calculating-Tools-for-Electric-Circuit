#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("*****反三角函数计算器*****\n");
    printf("Input: angle\n");

    double a;
    scanf("%lf", &a);

    printf("arctan=%.2lf\n",atan(a)/3.1415926*180);
    printf("arcsin=%.2lf\n",asin(a)/3.1415926*180);
    printf("arccos=%.2lf\n",acos(a)/3.1415926*180);

    system("pause");
    return 0;
}
