//
// Created by HanJun on 2017/8/27.
//
#include<stdio.h>

//*5.请编写一个函数void fun(int m,int k,int xx[]),该函数
// 的功能是：将大于整数m且紧靠m的k个素数存入xx所指的数组中。
void fun(int m,int k,int xx[]);

void main()
{
    int m;
    int k;
    int xx[100] = {0};

    printf("输入一个大于1的整数");
    scanf("%d", &m);
    printf("m = %d",m);

    printf("再输入k的值");
    scanf("%d", &k);

    printf("k = %d \n",k);

    fun(m,k,xx);

    printf("k = %d \n",k);
    for (int i = 0; i < k; i++) {
        if (xx[i]) {
            printf("xx[%d] : %d\n",i,xx[i]);
        }
    }
}
void fun(int m,int k,int xx[])
{
    int idx = 0;
    while (k > 0) {
        m++;
        for (int j = 2; j < m; j++) {
            if (m % j == 0) {
                break;
            } else if (j == m - 1) {
                k--;
//                printf("k = %d \n",k);
                xx[idx] = m;
                idx++;
            }
        }
    }
    printf("k = %d \n",k);
}
