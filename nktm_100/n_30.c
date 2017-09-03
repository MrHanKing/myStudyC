//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>

/**
30.请编写一个函数fun，它的功能是：求出一个2×M整型二维数组中最大元素的值，并将此值返回调用函数。
 **/
int fun(int **s,int m);

void main()
{
    int s[2][6] = {{0,3,566,868,46,46},
                   {45,64,34,23,54,34}};
    int m = 6;
    int *ss[2];
    for (int i = 0; i < 2; ++i) {
        ss[i] = s[i];
    }
    printf("输出结果为：%d",fun(ss,m));
}
int fun(int **s,int m)
{
    int max = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < m; ++j) {
            if(s[i][j] > max){
                max = s[i][j];
            }
        }
    }
    return max;
}
