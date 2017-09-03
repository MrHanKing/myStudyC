//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include <mem.h>

//*请编写一个函数fun，它的功能是：比较两个字符串的长度，(不得调用C语言提供的求字符串长度的函数)
// ，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。
int strLength(char *str);
char *whoIsLong(char *str1,char *str2);

void main()
{
    char str1[100] = {0};
    char str2[100] = {0};
    printf("输入两个字符串：");
    scanf("%s%s",str1,str2);

    printf("比较长的字符串是：%s",whoIsLong(str1,str2));
}

char *whoIsLong(char *str1,char *str2)
{
    if(strLength(str1) >= strLength(str2)) {
        return str1;
    } else {
        return str2;
    }
}

int strLength(char *str)
{
    int num = 0;
    while(str[num]) {
        num++;
    }
    return num;
}
