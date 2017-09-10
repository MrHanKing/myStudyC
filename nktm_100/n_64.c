//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>
#include <string.h>

/**
64.请编写函数fun，其功能是：将s所指字符串中ASCII值为奇数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。
 **/
void main()
{
    char s[] = "dahefeaoofei faefae";
    int len = strlen(s);
    char t[100] = {0};
    int k = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] % 2 != 0){
            t[k] = s[i];
            k++;
        }
    }
    printf("输出结果为：%s",t);
}
