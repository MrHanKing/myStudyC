//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
#include <string.h>

/**
44.编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。
 **/
int main()
{
    const char str[80] = "This is - www.w3cschool.cc - website";
    const char s[2] = "-";
    char *token;
    int num = 0;
    /* 获取第一个子字符串 */
    token = strtok(str, s);

    /* 继续获取其他的子字符串 */
    while( token != NULL )
    {
        printf( " %s\n", token );
        num++;
        token = strtok(NULL, s);
    }

    printf("出现次数为：%d",num-1);
    return(0);
}

