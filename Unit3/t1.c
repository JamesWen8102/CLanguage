/*
假如我国国民生产总值的年增长率为7%，计算10年后我国国民生产总值与现在相比增长多少百分比，计算公式：
p=(1+r)的n次方
r为年增长率，n为年数，p为与现在相比的倍数
*/

#include <stdio.h>
#include <math.h>
int main(){
    float r,n,p;
    r=0.07;
    p=pow(1+r,10);      //pow(x,y) 计算x的y次方的值
    //p=p*100;
    printf("10年后我国国民生产总值与现在相比增长%2.2f百分比",p);
    return 0;
}