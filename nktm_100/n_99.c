//
// Created by HanJun on 2017/9/14.
//
/**
99.请编写函数fun ，其功能是：计算并输出3到n之间所有素数的平方根之和。
 **/
void main()
{
    int n = 50;
    double s = 0;
    for (int i = 3; i < n+1; ++i) {
        for (int j = 2; j < i; ++j) {
            if (i % j ==  0){
                continue;
            }
            //是素数
            if (j == i - 1){
                s += sqrt(i);
            }
        }
    }
    printf("n = [%d]的计算结果为：%f",n,s);
}
