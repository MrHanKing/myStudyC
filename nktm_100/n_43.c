//
// Created by HanJun on 2017/9/7.
//
#include <stdio.h>
#include <string.h>
/**
43.编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，
 并通过形参指针max传回该串地址(用****作为结束输入的标志)。
 **/
void fun(char a[][100],int n,char *max);

void main()
{
    char ss[100][100];
    int len = 0;
    char max[100] = {0};

    printf("输入你想要的字符串：");
    for (int i = 0; i < 100; ++i) {
        scanf("%s",ss[i]);
        len++;
        if (strcmp(ss[i],"****") == 0) {
            len--;
            break;
        }
    }
    fun(ss,len,max);
    printf("最长的字符串是：%s",max);
}

void fun(char a[][100],int n,char *max)
{
    char *string;
    int len = 0;
    for (int i = 0; i < n; ++i) {
        string = a[i];
        if (strlen(string) > len){
            strcpy(max,string);
            len = strlen(string);
        }
    }
}
