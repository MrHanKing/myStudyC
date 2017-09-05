//
// Created by HanJun on 2017/9/5.
//
#include <stdio.h>
#include <string.h>
/**
36.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符
 串中的前导*号全部移到字符串的尾部。
 **/

void main()
{
    const char *s = "**feofaefe*fea*";
    char output[100];
    int len = strlen(s);
    int isRunK = 1;
    int k = 0;
    int j = 0;
    for (int i = 0; i < len; ++i) {
        if (isRunK == 1 && s[i] == '*') {
            k++;
            continue;
        }
        if (s[i] != '*' || isRunK == 0) {
            isRunK = 0;
            output[j] = s[i];
            j++;
        }
    }
    for (int l = 0; l < k; ++l) {
        output[j] = '*';
        j++;
    }
    output[j] = '\0';
    printf("输入的字符串为：%s\n",s);
    printf("输出的字符串为：%s",output);
}


