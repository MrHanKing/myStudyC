//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>

/**
53.请编写函数fun,该函数的功能是：实现B=A+A’，即把矩阵A加上A
 的转置，存放在矩阵B中。计算结果在main函数中输出。
 **/

void main()
{
    int a[][4] = {
            {2, 3, 4, 5},
            {3, 4, 1, 1},
            {6, 5, 4, 1},
            {1, 1, 1, 1},
    };
    int b[4][4];
    int size = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            b[i][j] = a[i][j] + a[j][i];
            printf("%d,",b[i][j]);
            if (j == size - 1){
                printf("\n");
            }
        }
    }
}
