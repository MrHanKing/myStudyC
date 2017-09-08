//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
/**
51.请编写函数fun，其功能是：将所有大于1小于整数m的非素
 数存入xx所指的数组中，非素数的个数通过k传回。
 **/

int main()
{
    int m = 100;
    int xx[100] = {0};
    int k = 0;
    //i 为大于1小于m的整数
    for (int i = 2; i < m; ++i) {
        //2为特殊的素数
        if (i == 2) {
            continue;
        }
        // 非素数
        for (int j = 2; j < i; ++j) {
            if (i % j == 0){
                xx[k] = i;
                printf("xx[%d] = %d\n",k,xx[k]);
                break;
            }
        }
    }
    return k;
}
