//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
62.请编写函数fun，该函数的功能是：统一一含字符串中单词的个数，作为函数值返回。一行字
 符串在主函数中输入，规定所有单词由小写字母组成，单词之间由若干个空格格开，一行的开始没有空格。
 **/
void main()
{
    char s[] = "chdoaefe ahfoea";
    int i = 0,num = 1;
    while (s[i+1] != '\0'){
        if (s[i] == ' ' && s[i+1] != ' '){
            num++;
        }
        i++;
    }
    printf("单词个数：%d",num);
}
