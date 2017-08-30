//
// Created by HanJun on 2017/8/30.
//
#include<stdio.h>
#include<math.h>

//*15.请编写一个函数unsigned fun(unsigned w),w是一个大于10的无符号整数，若w是n(n≥2)位的整数，则
// 函数求出w后n－1位的数作为函数值返回。
unsigned fun(unsigned w);

void main(){
    unsigned int w = 0;
    printf("请输入一个大于10的正整数：");
    scanf("%u",&w);
    printf("输出的结果是%u",fun(w));
}
unsigned fun(unsigned w) {
    unsigned int result = 0;
    int a,b = 0;
    a = w;
    if (a < 10) {
        printf("输入错误");
    }
    for (int i = 0; i < 100; ++i) {
        if (a>=10) {
            b = a % 10;
            a /= 10;
            result += b * pow(10,i);
        }
    }
    return result;
}
