//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include<mem.h>
#include<ctype.h>

/**
29.请编写一个函数fun，它的功能是：将ss所指字符串中所
 有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)。
 **/
void fun(char *ss);

void main()
{
    char s[100] = {0};
    scanf("%s",s);
    fun(s);
    printf("输出：%s",s);
}
void fun(char *ss)
{
    int len = strlen(ss);
    printf("len:%d\n",len);
    for (int i = 0; i < len; ++i) {
        if (ss[i] >= 'a' && ss[i] <= 'z') {
            if (i % 2 != 0) {
                ss[i] = toupper(ss[i]);
            }
        }
    }
}
