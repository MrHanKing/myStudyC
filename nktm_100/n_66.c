//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>
#include <stdbool.h>

/**
66.假定输入的字符串中只包含字母和*号。请编写函数
 fun，它的功能是：删除字符串中所有*号。在编写函数时，不得使用C语言提供的字符串函数。
 **/
void main()
{
    char s[] = "**faeo*fef*faefeg***GE**";
    // 2个指针，i为了取当前s[i]的值，k确定删除的*数量
    int i = 0,k = 0;
    while (true){
        s[i] = s[i+k];
        if (s[i] == '\0'){
            break;
        }
        if (s[i] == '*'){
            k++;
            continue;
        }
        i++;
    }
    printf("输出结果为：%s",s);
}
