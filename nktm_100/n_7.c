//
// Created by HanJun on 2017/8/28.
//
#include<stdio.h>
#include<stdlib.h>


//7.请编写一个函数int fun(int *s,int t,int *k),用来求
// 出数组的最大元素在数组中的下标并存放在k所指的储存单元中。
int fun(int *s,int t,int *k);

void main()
{
    int a[10] = {3,2,5,6,3,2,1,9};
    int t = 0;
    int c = 3;
    int *k = &c;
//    for (int i = 0; i < 10; ++i) {
//        a[i] = rand();
//    }
    t = 10;
    printf("数组长度是：%d \n",t);
    printf("%d\n",*a);
    fun(a,t,k);
}
int fun(int *s,int t,int *k)
{
    int max;
    for (int i = 0; i < t; ++i) {
        if (i==0) {
            max = s[i];
        }
        if (i>0 && s[i] > max) {
            max = s[i];
            *k = i;
        }
    }
    printf("最大值是：%d\n",max);
    printf("最大元素在数组中的下标是：%d",*k);
    return 0;
}
