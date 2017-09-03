//
// Created by HanJun on 2017/9/3.
//
#include<stdio.h>
#include <mem.h>

//*23.请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，主函
// 数中输出YES，否则返回0，主函数中输出NO。回文是指顺读和倒读都是一样的字符串。
int fun(char *str);

void main()
{
    char a[100]={0};

    printf("输入你要判断的字符串：");
    scanf("%s",a);

    if (fun(a)) {
        printf("YES");
    } else {
        printf("NO");
    }
}

int fun(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
//        printf("%s:%s \n",&str[i],&str[len-1-i]);
        if (str[i] != str[len-1-i]){
            return 0;
        }
    }
    return 1;
}

