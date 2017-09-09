//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>

/**
60.请编写函数fun，该函数的功能是：删去一维数组中所有相同的数，使之只剩
 一个。数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。
 **/

int main()
{
    int a[10] = {1,2,2,4,5,5,5,8,8,18};
    int len = 10;
    int j = 1;
    for (int i = 1; i < len; ++i) {
        if (a[j-1] != a[i]) {
            a[j] = a[i];
            j++;
        }
    }
    //输出结果
    for (int k = 0; k < j; ++k) {
        printf("a[%d] = %d\n",k,a[k]);
    }
}
