//
// Created by HanJun on 2017/9/12.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>
/**
83.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能使：将字符串尾部的*号全部删
 除，前面和中间的*号不删除。
 **/
void fun(char *str,int len);

void main()
{
    char *str;
    int len;
    str = (char *)malloc(sizeof(char) * 1024);
    printf("输入字符串，只包含字母和*号：");
    scanf("%s",str);

    len = strlen(str);
    fun(str,len);

    printf("输出结果为：%s",str);
    free(str);
}
void fun(char *str,int len)
{
    int k = 0;
    len--;
    while (str[len] == '*'){
        str[len] = '\0';
        len--;
    }
}
