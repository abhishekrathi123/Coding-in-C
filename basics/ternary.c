#include<stdio.h>
int main(){
    int a=-2,b=-3;
    int sum=a+b;
    int diff=a*b;
    (a>0 && b>0)?printf("%d",sum):printf("%d",diff);
    return 0;
}