#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main (){
    int a,b;
    printf("enter the no a=");
    scanf("%d",&a);
    printf("enter the no b=");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("%d",sum);
    return 0;
}