#include<stdio.h>
int main (){
    int a;
    a=3;
    int* x=&a;
    printf("%p\n",&a);
    printf("%p",x);
    return 0;
}