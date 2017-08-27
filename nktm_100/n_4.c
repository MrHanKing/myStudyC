//
// Created by HanJun on 2017/8/27.
//
#include<conio.h>
#include<stdio.h>

//*4.请编写一个函数void fun(char *tt,int pp[]),统计在
// tt字符中"a"到"z"26各字母各自出现的次数，并依次放在pp所指的数组中。
void fun(char *tt,int pp[]);

int main()
{
    int p[26];
    char tt[100];
    printf("请输入一串英文字母:");
    gets(tt);
    printf("i have get your input:%s",tt);
    fun(tt,p);
    for (int i = 0; i < 26; ++i) {
        printf(" %c : %d ",'a' + i,p[i]);
        if(i%3 == 0) {
            printf("\n");
        }
    }
}
void fun(char *tt,int pp[])
{
    //chu shi hua pp[]
    for (int i = 0; i < 26; i++) {
        pp[i] = 0;
    }
    while (*tt++ != '\0') {
        pp[*tt - 'a']++;
    }
}
