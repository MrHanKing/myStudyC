//
// Created by HanJun on 2017/8/31.
//
#include<stdio.h>

//*18.编写程序，实现矩阵(3行3列)的转置(即行列互换)。
void fun(int **s,int y);

void main(){
    int a[3][3] = {
            {0,1,2},
            {2,9,8},
            {3,6,5},
    };
    int *r[3];
    int y = 3;
    for (int i = 0; i < 3; ++i) {
        r[i] = a[i];
    }
    fun(r,y);
    //输出数组
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 3; ++i) {
            printf("%d",a[j][i]);
            if (i==2) {
                printf("\n");
            }
        }
    }
}
void fun(int **s,int y) {
    int a = 0;
    for (int i = 0; i < y; ++i) {
        for (int j = i; j < y; ++j) {
            a = s[i][j];
            s[i][j] = s[j][i];
            s[j][i] = a;
        }
    }
}

