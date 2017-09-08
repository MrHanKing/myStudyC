//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
#include <string.h>

/**
45.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：只删除字符串前导和尾
 部的*号，串中字母之间的*号都不删除。形参n 给出了字符串的长度，形参h给出了字符串中前导*号的个
 数，形参e给出了字符串中最后的*个数。在编写时不得使用C语言给提供得字符串函数。
 **/
int main()
{
    char str[] = "****This is - www.w3*c*sch*ool.cc - website***";
    int n = strlen(str);
    int h = 4, e = 3;

    int gap = n - h - e;
    for (int i = 0; i < gap; ++i) {
        str[i] = str[i+h];
    }
    str[gap] = 0;
    printf("输出结果是：%s",str);
    return(0);
}
