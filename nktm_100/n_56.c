//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>
#include <string.h>

/**
56.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：除了尾部的*号之外，将字母串中
 其他*号全部删除。形参p已指向字符串中最后的一个字母。不使用c的字符串函数。
 **/
void main()
{
    char str[] = "****This is - www.w3*c*sch*ool.cc - website***";
    //得到形参p
    char *p = str + strlen(str) - 1;
    char *start = str;
    int num = 0,k = 0;

    //得到末尾非*指针位置
    while (*p == '*'){
        num++;
        p--;
    }
    //去除前面的*
    while (start + k != p + 1){
        *start = *(start+k);
        if (*start == '*'){
            k++;
        } else {
            start++;
        }
    }
    //赋值末尾的*
    for (int i = 0; i < num; ++i) {
        *start = '*';
        start++;
    }
    //末尾赋值0结束
    *start = 0;
    printf("结果：%s",str);
}
