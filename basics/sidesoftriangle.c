#include<stdio.h>
int main(){
    int a,b ,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("a,b,c are the sides of a triangle");
    }
    else{
        printf("a,b,c are not the sides of the triangle");
    }
    return 0;
}