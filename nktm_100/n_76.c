//
// Created by HanJun on 2017/9/11.
//
#include <stdio.h>
#include <math.h>

/**
76.请编写函数fun，其功能时：计算并输出当x<0.97时下列多项式的值，直到｜Sn-S(n-1)｜<0.000001为止。
Sn=1+0.5x+0.5(0.5-1)/2!x(2)+...+0.5(0.5-1)(0.5-2).....(0.5-n+1)/n!x(n)
 **/
void main()
{
    double x = 0.21;
    double sn0,sn1 = 1.0,p = 1,d = 1,sum = 1;
    int n = 1;

    do {
        sn0 = sn1;
        p *= (0.5 - n + 1)*x;
        d *= n;
        sn1 = p / d;
        sum += sn1;
        n++;
        printf("%f \n",fabs(sn1 - sn0));
    } while (fabs(sn1 - sn0)>= 1e-6);
    printf("结果是：%f",sum);
}
