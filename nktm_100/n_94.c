//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
#include <string.h>
#include <malloc.h>
/**
94.规定输入字符串中只包含字母和*号。请编写函数fun，它的功
 能是：将函数字符串中的前导*号全部删除，中间和尾部的*号不删除。
 **/
void main()
{
    char a[] = "**fah**eouoafqwd***";
    int n = 0;
    char *b = malloc((strlen(a)+1) * sizeof(char));

    while (a[n] == '*'){
        n++;
    }
    strncpy(b,a+n,strlen(a)-n+1);
    strncpy(a,b,strlen(b)+1);
    printf("输出结果为：%s",a);
    free(b);
}
