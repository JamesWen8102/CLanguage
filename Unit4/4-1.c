#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x1,x2,p,q;
    double disc;
    printf("请输入a,b,c：");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc<0){
        printf("此方程无实根\n");
    }else{
        p=-b/(2.0*a);
        q=sqrt(disc)/(2.0*a);
        x1=p+q;
        x2=p-q;
        printf("两个实根是%7.2f%7.2f",x1,x2);
    }
    return 0;
}