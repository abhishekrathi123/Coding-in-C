#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a+b;
    d=a*b;
    a>0&& b>0 ? printf("%d",c):printf("%d",d);
    return 0;
}