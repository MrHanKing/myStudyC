//
// Created by HanJun on 2017/8/29.
//

#include<stdio.h>
#include<math.h>
/*10.编写函数fun,它的功能是：利用以下的简单迭代方法求方程cos(x)-x=0的一个实根。
迭代步骤如下：
(1)取x1初值为0.0；
(2)x0=x1,把x1的值赋各x0;
(3)x1=cos(x0),求出一个新的x1;
(4)若x0-x1的绝对值小于0.000001，则执行步骤(5),否则执行步骤(2);
(5)所求x1就是方程cos(x)-x=0的一个实根，作为函数值返回。
程序将输出Root=0.739085。 */
double fun();

void main() {
    printf("Root = %f\n",fun());
}
double fun(){
    double x0 = 0.0;
    double x1 = 1.0;
    while (fabs(x0-x1)>= 0.000001) {
        printf("x0-x1=%f\n",x0-x1);
        printf("abs=%f\n",fabs(x0-x1));
        x0 = x1;
        x1 = cos(x0);
        printf("%f\n",x1);
    }
    return x1;
};