//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include<malloc.h>

/**
*28.请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它
 * 所在的下标，最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数
 * 组名，n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。
 **/
int *fun(int a[],int n);

void main()
{
    int x[] = {31,24,53,6,8,646,3,};
    int n = 7;
    int max,index;
    int *p;

    p = fun(x,n);
    max = *p;
    index = *(p+1);
    printf("最大值是：%d \n 元素的下标是：%d",max,index);
}
int *fun(int a[],int n)
{
    int *x = (int *)malloc(sizeof(int)*2);
    //当初忘记初始化了
    x[0] = 0;
    x[1] = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > x[0]) {
            x[0] = a[i];
            x[1] = i;
        }
    }
    return x;
}
