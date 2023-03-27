#include <stdio.h>
int main(){
    int a,b,c;
    printf("请输入两个数：");
    scanf("%d%d",&a,&b);
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    printf("从小到大的顺序是%d%d",a,b);
    return 0;
}