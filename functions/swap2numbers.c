#include<stdio.h>
int main(){
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a after swapping = %d\n",a);
    printf("value of b after swapping =%d",b);
    return 0;
}