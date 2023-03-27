/*
设圆半径r=1.5，圆柱高h=3，求圆的周长、圆面积、圆球表面积、圆球体积、圆柱体积。
用scanf输入数据，取小数点后两位。
圆周长=2Πr、圆面积=Πr?、圆球表面积=4Πr?、圆球体积=（4/3）Πr的三次方、圆柱体积=Πr?h
*/
#include <stdio.h>
#define PI 3.1415926
int main(){
    float r,c,s1,s2,v1,v2;
    int h;
    printf("请输入圆的半径：");
    scanf("%f",&r);
    printf("请输入圆柱高：");
    scanf("%d",&h);
    c=2*PI*r;
    printf("圆周长等于：%6.2f\n",c);
    s1=PI*r*r;
    printf("圆面积等于：%6.2f\n",s1);
    s2=4*PI*r*r;
    printf("圆球表面积等于：%6.2f\n",s2);
    v1=(4.0/3.0)*PI*r*r*r;
    printf("圆球体积等于：%6.2f\n",v1);
    v2=PI*r*r*h;
    printf("圆柱体积等于：%6.2f\n",v2);
    return 0;
}