//
// Created by HanJun on 2017/9/13.
//
#include <stdio.h>
/**
88.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：除了字符串前导的*号之外，将串中其
 他*号全部删除。在编写函数亚时，不得使用C语言提供的字符串函数。
 **/
void main()
{
    char a[] = "**fah**eouoafqwd***";
    int num = 0, k = 0;

    //处理前面的*
    while (a[num] == '*'){
        num++;
    }
    //处理开头*号之后的字符串
    while (a[num+k] != '\0'){
        a[num] = a[num + k];
        if (a[num] == '*'){
            k++;
        } else{
            num++;
        }
    }
    a[num] = '\0';
    printf("输出结果：%s",a);
}

