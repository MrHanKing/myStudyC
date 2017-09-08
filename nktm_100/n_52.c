//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
#include <string.h>

/**
52.编写一个函数fun，它的功能是：实现两个字符串的
 连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。
 **/

void main()
{
    char a[100] = "hello wow ";
    char b[] = "world";

    int aLen = strlen(a);
    int allLen = strlen(a) + strlen(b);
    for (int i = aLen; i < allLen; ++i) {
        a[i] = b[i-aLen];
    }
    printf("输出结果：%s",a);
}
