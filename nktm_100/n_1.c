#include <stdio.h>

//*1.m个人的成绩存放在score数组中，请编写函
// 数fun,它的功能是：将低于平均分的人数作为函数值返
// 回，将低于平均分的分数放在below所指定的数组中。
int score[] = {100,200,300,400,500};
int below[5];
int main(void)
{
    printf("Hello, world\n");
    int g = 0;
    int average = 0;
    int i,j,k;
    k = 0;
    for (i=0;i<5;i++)
    {
        average += score[i];
    }
    average = average/5;
    for (j=0;j<5;j++)
    {
        if (score[j] < average)
        {
            g += 1;
            below[k] = score[j];
            printf("below[%d] = %d\n",k,below[k]);
            k += 1;
        }
    }
    printf("哈哈 who score is less than average:%d",g);
    return g;
}