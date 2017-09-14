//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
#include <string.h>
/**
95.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串的前导*号不得
 多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做。字符串中间和尾部的*号不删除。
 **/
void main()
{
    char a[] = "*****fah**eouoafqwd***";
    int needN = 3;
    int n = 0;
//    char *b = malloc((strlen(a)+1) * sizeof(char));
    //获得前*数量
    while (a[n] == '*'){
        n++;
    }
    //若多于n个，则删除多于的*号
    if (n > needN) {
        strncpy(a+needN, a+n, strlen(a)-n+1);
    }
    printf("输出结果为：%s",a);
//    free(b);
}

