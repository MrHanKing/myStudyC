//
// Created by HanJun on 2017/9/11.
//
#include <stdio.h>
#include <malloc.h>

/**
 75.请编写函数fun ，该函数的功能：将M行N列的二维数组中的数据，按列的顺学依次放到一维数组中。
 **/
void fun(int **ss,int m,int n, int s[]);

void main()
{
    int input[][5] = {
            {2,3,4,5,7},
            {3,4,1,1,8},
            {6,5,4,1,5},
            {1,1,1,1,7},
    };
    int **ss;
    int m = 4;
    int n = 5;
    //申请输出内存
    int *s = (int*)malloc(m * n * sizeof(int));
    //申请2维数据的内存
    ss = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; ++i) {
        ss[i] = (int *)malloc(n * sizeof(int));
    }
    //2维数据的内存赋值
    for (int i = 0; i < m; ++i) {
        ss[i] = input[i];
    }
    //数据处理
    fun(ss,m,n,s);
    //输出结果
    for (int j = 0; j < m * n; ++j) {
        printf("s[%d] = %d ",j,s[j]);
        if (j != 0 && j % 5 == 0){
            printf("\n");
        }
    }
    //free
    for (int i = 0; i < m; ++i) {
        free(ss[i]);
    }
    free(ss);
    free(s);
}
//处理2维数组
void fun(int **ss,int m,int n, int s[])
{
    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            s[k] = ss[j][i];
            k++;
        }
    }
}
