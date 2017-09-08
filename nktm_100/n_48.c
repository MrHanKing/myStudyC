//
// Created by HanJun on 2017/9/8.
//
#include <stdio.h>


/**
48.请编写函数fun，其功能是：将两个两位数的正整数a,b合并成一个整数放在c中。合并的方式是：将a数的十位
 和个位依次放在c数的千位和十位上，b数的十位和个位数依次放在c数的百位和个位上。
 **/

int main()
{
    int a = 65;
    int b = 43;
    int result = 0;

    result += a / 10 * 1000;
    result += a % 10 * 10;
    result += b / 10 * 100;
    result += b % 10 ;
    printf("result = %d",result);
}

