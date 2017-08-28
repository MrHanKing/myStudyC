//
// Created by HanJun on 2017/8/28.
//

#include<stdio.h>
//*8.编写函数fun,功能是：根据以下公式计算s,计算结果作为函数
// 值返回；n通过形参传入。s=1+1/(1+2)+1/(1+2+3)+.......+1/(1+2+3+4+......+n)
float fun(int n);

void main()
{
    float s = 0;
    int n = 2;
    s = fun(n);

    printf("计算结果为：%f",s);
};

float fun(int n) {
    float a = 0,b = 0;
    for (int i = 1; i < n+1; ++i) {
        if(i == 1) {
            a = 2;
        }
        if (i > 1) {
            int count = 0;
            for (int j = 1; j < i+1; ++j) {
                count += j;
            }
            printf("count的值：%d\n",count);
            if (i == n) {
                b = count;
            } else {
                b = count + 1;
            }
            a = a / b;
            printf("a的值：%f\n",a);
        }
    }
    if (n <= 0) {
        printf("请输入一个大于0的整数");
    }
    printf("a的值：%f\n",a);
    return a;
}