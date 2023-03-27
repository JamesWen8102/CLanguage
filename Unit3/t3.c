/*
购房从银行贷了一笔款为300000元，准备每月还款6000元，月利率为1%，计算多少个月能还清？求月份取小数点后一位。
*/
#include <stdio.h>
#include <math.h>
int main(){
    float r,m;//r为利率，m为月份
    int d=300000,p=6000;
    m=log10(p/(p-d*0.01))/log10(1+0.01);
    printf("需要%6.1f月才能还清",m);
    return 0;
}
//float 有效数字只有6位，所以是6.1