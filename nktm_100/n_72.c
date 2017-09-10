//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>
#include <string.h>

/**
72.请编写函数fun，其功能是：将s所指字符串中下标为偶数的字符删除，串中剩余字符形成新串放在t所指数组中。
 **/
void main()
{
    char s[] = "faheofhaefo4u03uca";
    char t[100] = {0};
    int k = 0;
    int len = strlen(s);

    for (int i = 0; i < len; ++i) {
        if (i % 2 == 0){
            continue;
        }
        t[k] = s[i];
        k++;
    }
    printf("输出结果：%s",t);
}
