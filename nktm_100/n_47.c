//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
47.请编写一个函数void fun(char *ss)，其功能时：将字符串ss中所有下标为
 奇数位置上的字母转换为大写(若位置上不是字母，则不转换)。
 **/
void fun(char *ss);

int main()
{
    char ss[] = "efjoeafe9438fhoef";
    fun(ss);
    printf("输出结果是：%s",ss);
    return 0;
}
void fun(char *ss)
{
    int len = strlen(ss);
    //i为奇数
    for (int i = 1; i < len; i=i+2) {
        if (ss[i] >= 'a' && ss[i] <= 'z'){
            ss[i] = (char)toupper(ss[i]);//toupper 返回int 需要转换
        }
    }
}
