//
// Created by HanJun on 2017/8/27.
//

#include<stdio.h>

//*2.请编写函数fun，它的功能是：求出1到100之内能被7或者11整除，但
// 不能同时被7和11整除的所有整数，并将他们放在a所指的数组中，通过n返回这些数的个数。

int result[100];

int main(void)
{
    int n = 0, k = 0;
    int *a;

    a = result;

    for (int i = 0; i < 100; i++) {
        if (!((i % 7 == 0) && (i % 11 == 0))) {
            if ((i % 7 == 0)||(i % 11 == 0)) {
                n += 1;
                *(a+k) = i;
                printf("result[%d]: %d\n",k,i);
                k += 1;
            }
        }
    }
    return n;
}
