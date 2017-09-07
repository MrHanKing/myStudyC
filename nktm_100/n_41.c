//
// Created by HanJun on 2017/9/7.
//
#include <stdio.h>

/**
41.请编写函数fun，该函数的功能是：将M行N列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。
 **/
char *fun(char **ss,int m,int n);

void main()
{
    char ss[][4] = {{'a','b','c','d'},
                    {'f','g','h','i'}};
    int m = 2;
    int n = 4;
    char *r[2];
    char *l;

    for (int i = 0; i < 2; ++i) {
        r[i] = ss[i];
    }
    l = fun(r,m,n);
    printf("输出的结果是：%s",l);
}

char *fun(char **ss,int m,int n)
{
    char s[100]={0};
    char *sss = &s[0];
    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            s[k] = ss[j][i];
            k++;
        }
    }
    return sss;
}
