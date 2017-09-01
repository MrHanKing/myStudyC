//
// Created by HanJun on 2017/8/31.
//
#include<stdio.h>
#include<mem.h>



//*17.请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容拟置。
void fun(char *s);

void main(){
    char a[100] = {0};
    char *s = a;
    printf("输入你的东西string");
    scanf("%s",s);
    fun(s);
    printf("这是字符串逆置：%s",s);

}
void fun(char *s) {
    char a = 0;
    int b = strlen(s);
    printf("aaaa%d\n",b);
    for (int i = 0; i < b/2; ++i) {
        a = *s;
        printf("a = %s \n",&a);
        *(s+i) = *(s+b-i-1);
        printf("s[%d] = %s \n",i,s+i);
        s[b-i-1] = a;
        printf("s[%d] = %s \n",b -1 - i,&a);
    }
}
