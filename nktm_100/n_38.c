//
// Created by HanJun on 2017/9/5.
//
#include <stdio.h>
#include <string.h>
/**
38.请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。
 **/
int fun(char ss[],char input);

void main()
{
    char *ss = "abfeofruakd";
    char a = 'a';
    printf("输出结果：%d",fun(ss,a));
}

int fun(char ss[],char input)
{
    int len = strlen(ss);
    int output = 0;
    for (int i = 0; i < len; ++i) {
        if (ss[i] == input) {
            output++;
        }
    }
    return output;
}
