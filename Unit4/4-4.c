//输入一个字符，判断是否为大写字母，如果是，将它转换成小写字母；如果不是，不转换。
#include <stdio.h>
int main(){
    char a,A;
    printf("请输入一个字母：");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("它的小写字母是：%c",a+32);
    }else{
        printf("它本身就是小写字母，不需要转换");
    }
    return 0;
}