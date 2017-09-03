//
// Created by HanJun on 2017/9/1.
//
#include<stdio.h>
#include<mem.h>

//*19.编写函数fun,该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理。
void fun(char *s,char y);
void con_str(char*s,char y,int f,int i,int b);

void main() {
    //准备删掉的字符a 存字符串的b；
    char a = 0;
    char b[100] = {0};
    printf("输入你要删掉的字符和字符串");
    scanf("%s %s",&a,b);
    fun(b,a);
    printf("输出的结果：%s",b);
}
//输入变量，初始化参数
void fun(char *s,char y) {
    int b = strlen(s);
    //f表示删除字符的数量
    int f = 0;
    //i表示起始位置
    int i = 0;
    con_str(s,y,f,i,b);
}
//实际处理字符
void con_str(char*s,char y,int f,int i,int b) {
    if (i+f > b-1) {
        s[i] = 0;
        return;
    }
    s[i] = s[i+f];
    printf("%s",&s[i]);
    if(s[i] == y) {
        f++;
        return con_str(s,y,f,i,b);
    }
    if(s[i] != y) {
        i++;
        return con_str(s,y,f,i,b);
    }
}
