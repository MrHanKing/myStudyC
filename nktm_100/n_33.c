//
// Created by HanJun on 2017/9/4.
//
#include<stdio.h>
#include<mem.h>

/**
33.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串中尾部的*号不得多于n个；
 若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。
 **/
void fun(char *s,int n);

void main()
{
    char s[100] = {0};
    int t = 0;
    printf("输入一串字符串和末尾想要的*数");
    scanf("%s %d",s,&t);
    fun(s,t);
    printf("结果是：%s",s);
}

void fun(char *s,int n)
{
    int len = strlen(s);
    int k = 0;//存放末尾星星数量
    for (int i = 0; i < len; ++i) {
        if (s[i] == '*') {
            k++;
        } else {
            k = 0;
        }
    }
    if (k>n){
        s[len-(k-n)] = 0;
    }
}
