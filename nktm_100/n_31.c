//
// Created by HanJun on 2017/9/4.
//
#include<stdio.h>
#include<mem.h>

/**
31.请编写函数fun，其功能是：将s所指字符串中除了下标为偶数、同时ASCII值也为偶数的字符外，其余的全都删除；
 串中剩余字符所形成的一个新串放在t所指的一个数组中。
 **/
void fun(char *s,char *t);

void main()
{
    char s[100] = {0};
    char t[100] = {0};
    printf("输入一串字符串");
    scanf("%s",s);
    fun(s,t);
    printf("结果是：%s",t);
}

void fun(char *s,char *t)
{
    int len = strlen(s);
    int k = 0;
    for (int i = 0; i < len; ++i) {
        if (i == 0) {
            continue; //0不是奇数页不是偶数
        }
        if (i % 2 == 0 && s[i] % 2 == 0) {
//            printf("%d\n",s[i]);
            t[k] = s[i];
            k++;
        }
    }
}
