//
// Created by HanJun on 2017/9/9.
//
#include <stdio.h>
#include <stdlib.h>

/**
61.请编写函数fun，该函数的功能使：统计各年龄段的人数。N个年龄通过调用随机函数获得，并放在主函数
 的age数组中；要求函数把0至9岁年龄段的人数放在d[0]中，把10至19岁年龄段的人数放在d[1]中，把20至29岁
 的人数放在d[2]中，其余以此类推，把100岁(含100)以上年龄的人数都放在d[10]中。结果在主函数中输出。
 **/
#define N 100

void main()
{
    int age[100];
    int d[11] = {0};
    //制造年龄组
    for (int i = 0; i < N; ++i) {
        age[i] = rand() % 120;
        printf("age[%d] = %d  ",i,age[i]);
        if (i>0 && i%10 == 0){
            printf("\n");
        }
    }
    //计算b内各项值
    for (int j = 0; j < N; ++j) {
        if (age[j] >= 100){
            d[10]++;
        } else{
            d[age[j] / 10]++;
        }
    }
    //输出b
    for (int k = 0; k < sizeof(d)/ sizeof(int); ++k) {
        printf("b[%d] = %d  ",k,d[k]);
    }
}


