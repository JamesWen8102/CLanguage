/*
请编程将“china”译成密码，密码的规律是：用原来的字母后面第四个字母代替原来的字母。
用赋初值的方式使c1，c2，c3，c4，c5这5个变量的值分别为c、h、i、n、a
*/
#include <stdio.h>
int main(){
    char c1='c',c2='h',c3='i',c4='n',c5='a';
    c1=c1+4;
    c2=c2+4;
    c3=c3+4;
    c4=c4+4;
    c5=c5+4;
    printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
    return 0;
}
