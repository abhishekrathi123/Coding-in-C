#include<stdio.h>
int main (){
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    int power = 1;
    for (int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d",power);
    return 0;
}