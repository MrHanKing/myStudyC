//
// Created by HanJun on 2017/9/11.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

/**
78.请编写函数fun，其功能是：将s所指字符串中ASCII值为偶数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。
 **/
void fun(char s[],char *t);

void main()
{
    char s[] = "afeiogoefioafe";
    char *t;

    t = (char *)malloc((strlen(s)+1) * sizeof(char));
    fun(s,t);
    printf("输出结果为：%s",t);
    free(t);
}

void fun(char s[],char *t)
{
    int len = strlen(s);
    int k = 0;
    for (int i = 0; i < len; ++i) {
        if (s[i] % 2 == 0){
            continue;
        }
        t[k] = s[i];
        k++;
    }
    t[k] = '\0';
}
