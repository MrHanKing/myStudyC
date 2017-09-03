//
// Created by HanJun on 2017/9/2.
//
#include<stdio.h>

//*20.编写函数int fun(int lim,int aa[MAX]),该函数的功能是求出小于或等于lim的所有素
// 数并放在aa数组中，该函数返回所求的素数的个数。
int fun(int lim,int aa[]);

void main() {
    int aa[100] = {0};
    int lim = 0;
    printf("你会得到输入数之内的所有素数，请输入一个数：");
    scanf("%d",&lim);
    fun(lim,aa);
    //打印结果
    for (int i = 0; i < 100; ++i) {
        if (aa[i] != 0) {
            printf("aa[%d] = %d \n",i,aa[i]);
        }
    }

}

int fun(int lim,int aa[]) {
    int n = 0;
    for (int i = 0; i < lim+1; ++i) {
        if ( i== 0 | i == 1) {
            continue;
        }
        //特殊处理2
        if (i == 2) {
            aa[n] = i;
            n++;
        }
        //判断其他素数
        for (int j = 0; j < i; ++j) {
            if (j == 0 | j == 1) {
                continue;
            }
            if ( i % j == 0) {
                break;
            } else if (j == i - 1) {
                aa[n] = i;
                n++;
            }
        }
    }
    return n;
}
