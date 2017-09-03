//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include <mem.h>

//*24.请编写一个函数fun，它的功能是：将一个数字字符串转换为
// 一个整数(不得调用C语言提供的将字符串转换为整数的函数)。
int fun(char *str);

void main()
{
    char str[100]  = {0};
    printf("输入一个数字字符串：");
    scanf("%s",str);
    if (fun(str)) {
        printf("得到的结果是：%d",fun(str));
    }
}

int fun(char *str)
{
    int isMinus = 0;
    int len = strlen(str);
    int sum=0;
    if(str[0] == '-') {
        isMinus = 1;
    }
    //判断是否是数字字符串
    for (int i = isMinus; i < len; ++i) {
        if ((str[i]) >= '0' && str[i] <= '9') {
            continue;
        }else{
            printf("输入的字符串错误");
            return 0;
        }
    }
    for (int j = isMinus; j < len; ++j) {
        sum = sum * 10 + str[j] - '0';
    }
    if (isMinus) {
        sum = -sum;
    }
    return sum;
}

