//
// Created by HanJun on 2017/8/29.
//
#include<stdio.h>

//*12.下列程序定义了N×N的二维数组，并在主函数中赋值。请编写
// 函数fun,函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。
void fun(int **a,int x ,int y);

void main(){
    int a[10][10] = {
            {0,1,2,3,4,5,6,7,8,9},
            {2,3,11,4,5,6,7,8,9,10},
            {0,1,2,3,4,5,6,7,8,9},
    };
    int *r[10];
    int x = 10;
    int y = 10;
    for (int i = 0; i < 10; ++i) {
        r[i] = a[i];
    }
    fun(r,x,y);
}
void fun(int **a,int x ,int y) {
    for (int i = 0; i < y; ++i) {
        for (int j = 0; j < x; ++j) {
            if (i>j) {
                a[i][j] = 0;
                printf("a[%d][%d] = %d ",i,j,*(*(a+i)+j));
            }
            if (j == x -1) {
                printf("\n");
            }
        }
    }
}
