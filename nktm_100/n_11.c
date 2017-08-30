//
// Created by HanJun on 2017/8/29.
//
#include<stdio.h>

//11.下列程序定义了N×N的二维数组，并在主函数中自动赋
// 值。请编写函数 fun(int a[][N]),该函数的功能是：使数组左下半三角元素中的值全部置成0。
void fun(int a[][10],int x ,int y);

void main(){
    int a[10][10] = {
            {0,1,2,3,4,5,6,7,8,9},
            {1,2,3,4,5,6,7,8,9,10},
            {0,1,2,3,4,5,6,7,8,9},
    };
    int x = 10;
    int y = 10;
    fun(a,x,y);
}
void fun(int a[][10],int x ,int y) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (i<j) {
                a[i][j] = 0;
                printf("a[%d][%d] = %d",i,j,a[i][j]);
            }
        }
    }
}
