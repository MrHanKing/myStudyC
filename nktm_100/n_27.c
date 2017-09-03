//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>

/**
27.请编写一个函数fun,它的功能是：求出1到m之内(含m)能被7
 或11整除的所有整数放在数组a中，通过n返回这些数的个数。
 **/
int fun(int a[],int m);

void main()
{
    int m;
    int a[100] = {0};
    printf("请输入一个数：");
    scanf("%d",&m);
    printf("符合条件的数有%d个",fun(a,m));
}
int fun(int a[],int m)
{
    int k = 0;
    for (int i = 1; i < m+1; ++i) {
        if (i%7 == 0 || i%11 == 0) {
            a[k] = i;
            printf("a[%d] = %d\n",k,i);
            k++;
        }
    }
    return k;
}
