//
// Created by HanJun on 2017/8/27.
//

#include <stdio.h>

//*3.请编写函数void fun(int x,int pp[],int *n),它的功能是：求出能整除
// x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回。
void fun(int x, int pp[], int *n);

void main()
{
    int x;
    int pp[100];
    int n;
    printf("请输入一个小于100的整数：");
    scanf("%d",&x);
    fun(x,pp,&n);
}

void fun(int x, int pp[], int *n)
{
    int k = 0;
    int num = 0;
    for (int i = 0; i < x; ++i) {
        if ((i % 2 != 0) && (x % i == 0)) {
            num += 1;
            *(pp + k) = i;
            printf("pp[%d] is %d\n",k,pp[k]);
            k += 1;
        }
    }
    *n = num;
    printf("n is %d\n",*n);
}