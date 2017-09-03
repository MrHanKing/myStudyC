//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include <mem.h>
//*21.请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ASCII码降序排列。
void fun(char s[]);

void main() {
    char s[100] = {0};
    printf("输入一个100位以内的字符串");
    scanf("%s",s);
    fun(s);
    printf("得到的结果是：%s",s);
}
//除首尾字符，中间的字符按ASCII码降序排列
void fun(char s[]) {

    int sl = strlen(s);

    for (int i = 1; i < sl-1; ++i) {
        char a = 0;
        for (int j = i; j < sl-1; ++j) {
            if (s[i] < s[j]) {
                a = s[j];
                s[j] = s[i];
                s[i] = a;
            }
        }
    }
}
