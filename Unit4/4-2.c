#include <stdio.h>
int main(){
    int a,b,c;
    printf("��������������");
    scanf("%d%d",&a,&b);
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    printf("��С�����˳����%d%d",a,b);
    return 0;
}