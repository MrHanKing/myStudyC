//
// Created by HanJun on 2017/9/5.
//
#include <stdio.h>
#include <malloc.h>
/**
39.请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组
 中由n个整数，要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。
 **/
void fun(int *ss,int p,int len);

void main()
{
    int a[5] = {3,4,6,8,11};
    int p = 2;
    int len = sizeof(a)/ sizeof(int);
    fun(a,p,len);
    for (int i = 0; i < 5; ++i) {
        printf("a[%d] = %d \n",i,a[i]);
    }
}

void fun(int *ss,int p,int len) {
    int *a;
    int j = 0;
    a = malloc(sizeof(int) * (p+1));
    for (int i = 0; i < len; ++i) {
        if (i <= p) {
            a[i] = ss[i];
        } else {
            ss[j] = ss[i];
            j++;
        }
    }
    for (int k = 0; k < p + 1; ++k) {
        ss[j] = a[k];
        j++;
    }
    free(a);
}
