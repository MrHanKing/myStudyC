//
// Created by HanJun on 2017/9/12.
//
#include <stdio.h>
/**
80.程序定义了N×N的二维数组，并在主函数中自动赋值。请编写
 函数fun,该函数的功能是：使数组左下半三角元素中的值乘以n。
 **/
void main()
{
    int ss[][4] = {
            {2,3,4,5},
            {3,4,1,1},
            {6,5,4,1},
            {1,1,1,1},
    };
    int n = 4;
    //处理
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > j) {
                ss[i][j] *= n;
            }
        }
    }
    //输出
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("a[%d][%d] = %d ",i,j,ss[i][j]);
            if ((i*n+j + 1) % 4 == 0){
                printf("\n");
            }
        }
    }
}
