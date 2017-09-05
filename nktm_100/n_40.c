//
// Created by HanJun on 2017/9/5.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

/**
40.请编写函数fun，该函数的功能是移动字符串中内容，移动的规
 则如下：把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。
 **/
void fun(char *ss,int m);

void main()
{
    char *ss = "abcdefghij";
    int m = 4;

    fun(ss,m);
    printf("输出的结果:%s",ss);
}

void fun(char *ss,int m)
{
    char *a;
    int len = strlen(ss);
    int j = 0;
    a = malloc(sizeof(char) * (m+1));
    for (int i = 0; i < len; ++i) {
        if (i < m) {
            a[i] = ss[i];
            a[i+1] = '\0';
        } else {
            ss[j] = ss[i];
            j++;
        }
    }
    for (int k = 0; k < m; ++k) {
        ss[j] = a[k];
        j++;
    }
    free(a);
}
