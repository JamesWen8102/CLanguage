#include <stdio.h>
int main(){
    // printf("请输入一个数：");
    // int a;
    // scanf("%d",&a);
    // if(a%2==0){
    //     printf("这个数是奇数");
    // }else{
    //     printf("这个数不是奇数");
    // }
    // return 0;
    int a=1;
    while(a<=100){
        if(a%2==0){
            printf("%d\n",a);
        }
        a=a+1;
    }
    return 0;
}