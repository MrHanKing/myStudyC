//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>

/**
55.请编写函数fun，该函数的功能是：将M行N列的二维数组中的数据，按行的
 顺序依次放到一维数组中，一维数组中数据的个数存放在形参n所指的储存单元中。
 **/
void main()
{
    int ss[][5] = {
            {2,3,4,5,7},
            {3,4,1,1,8},
            {6,5,4,1,5},
            {1,1,1,1,7},
    };
    int t=0,line = 4,row = 5;
    int a[100] = {0};
    int *n = &t;
    //二维依次输入一维数组
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < row; ++j) {
            a[i*row + j] = ss[i][j];
            t++;
        }
    }

    //输出结果查看
    printf("一维数组中的个数为：%d \n",*n);
    for (int k = 0; k < line*row; ++k) {
        printf("a[%d] = %d ",k,a[k]);
        if (k%5 == 0){
            printf("\n");
        }
    }
}
