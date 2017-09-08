//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>
#include <string.h>

/**
49.请编写函数fun，其功能是：将s所指字符串中下标为偶数同时ASCII值
 为奇数的字符删除，s中剩余的字符形成的新串放在t所指的数组中。
 **/

int main()
{
    char s[] = "hfoeiiofaflafie";
    char t[100] = {0};
    int tIndex = 0;
    int sLen = strlen(s);

    for (int i = 0; i < sLen; i++) {
        if (i%2 == 0 && s[i] % 2 != 0){
            continue;
        }
        t[tIndex] = s[i];
        tIndex++;
    }
    printf("输出的结果为：%s",t);
}
