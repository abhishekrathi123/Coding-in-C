#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks of five subjects :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int sum =a+b+c+d+e;
    printf("sum of marks = %d\n",sum);
    float per=sum/5;
    printf("percentage of marks = %f",per);
    return 0;
}