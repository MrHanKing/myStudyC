//
// Created by HanJun on 2017/8/28.
//
#include<stdio.h>
#include <mem.h>
//*6.请编写一个函数void fun(char a[],char b[],int n),其功能是：删除各字符串中指定
// 下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。
void fun(char a[],char b[],int n);

void main()
{
    char a[100]= {0},b[100] = {0};
    int n = 0;
    printf("输入一个字符串：");
    scanf("%s",a);
    printf("输入你想删掉的指定第X个字符：");
    scanf("%d",&n);
    fun(a,b,n);
};
void fun(char a[],char b[],int n)
{
    for (int i = 0; i < strlen(a); ++i) {
        if (i < n) {
            b[i] = a[i];
        }
        if (i > n) {
            b[i-1] = a[i];
        }
    }
    printf("结果：%s",b);
}
