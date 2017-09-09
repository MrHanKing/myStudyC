//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>
#include <string.h>

/**
59.请别写函数fun，该函数的功能是：将放在字符串数组中的M个
 字符串(每串的长度不超过N)，按顺序合并组成一个新的字符串。
 **/

void main()
{
    char ss[3][100] = {
            "afebfbefief",
            "fehfieoafjef",
            "fhueahfiea",
    };
    char output[1024] = {0};
    int m = 3;
    for (int i = 0; i < m; ++i) {
        strncat(output,ss[i],100);
    }
    printf("输出结果为：%s",output);
}
