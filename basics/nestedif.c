#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is grestest");
        }
        else{
            printf("c is greatest");
        }
    }
    if(b>a){
        if(b>c){
            printf("b is greatest");
        }
        else{
            printf("c is greatest");
        }
    }
    return 0;
}