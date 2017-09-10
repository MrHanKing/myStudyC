//
// Created by HanJun on 2017/9/10.
//
#include <stdio.h>

/**
69.请编写一个函数fun，它的功能时：求Fibonacci数列中大于t的最小的一个数，结果由函数返回。
 其中Fibonacci数列F(n)的定义为：
F(0)=0,F(1)=1,F(n)=F(n-1)+F(n-2)
 **/
//int Fibonacci(int n);//本想用递归求值，后来不用了，存下数据不用重复计算

void main()
{
    int t = 10;
    int fibonacci_1 = 0;
    int fibonacci_2 = 1;
    int i = 0;//判断给fibonacci_1赋值F(n-1)还是给fibonacci_2赋值F(n-1)
    while (fibonacci_1+fibonacci_2 <= t){
        if (i % 2 == 0){
            fibonacci_1 = fibonacci_1 + fibonacci_2;
            i++;
            continue;
        }
        fibonacci_2 = fibonacci_1 + fibonacci_2;
        i++;
    }
    printf("输出结果为：%d",fibonacci_1 + fibonacci_2);
}
//下方代码不用
//int Fibonacci(int n)
//{
//    if (n == 0) {
//        return 0;
//    }
//    if (n == 1) {
//        return 1;
//    }
//    return Fibonacci(n-1) + Fibonacci(n-2);
//}
