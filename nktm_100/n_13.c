//
// Created by HanJun on 2017/8/30.
//

#include<stdio.h>

//*13.请编写一个函数void fun(int tt[M][N],int pp[N]),tt指向一个M行N列的二维函数组，求出二
// 维函数组每列中最小元素，并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。
void fun(int **tt,int pp[],int y,int x);

void main(){
    int a[10][9] = {
            {0,1,2,3,4,5,6,7,8,},
            {2,3,11,4,5,6,7,8,9,},
            {0,1,2,3,4,5,1,2,3,},
            {2,3,11,4,5,6,7,8,9,},
            {2,3,11,4,5,6,7,8,9,},
            {2,3,11,4,5,6,7,8,9,},
            {2,3,11,4,5,6,7,8,9,},
            {2,3,11,4,5,6,7,8,9,},
            {2,3,11,4,5,6,7,8,9,},
            {2,3,11,4,5,6,7,8,9,},
    };
    int *r[10];
    int pp[9] = {0};
    int y  = 10;
    int x = 9;
    for (int i = 0; i < 10; ++i) {
        r[i] = a[i];
    }
    fun(r,pp,y,x);

}
void fun(int **tt,int pp[],int y,int x) {
    int s = 0;
    for (int j = 0; j < x; ++j) {
        s = *(*(tt)+j);
        for (int i = 0; i < y; ++i)  {
            if (*(*(tt+i)+j)<s) {
                s = *(*(tt+i)+j);
            }
        }
        pp[j] = s;
        printf("pp[%d] = %d\n",j,s);
    }
}