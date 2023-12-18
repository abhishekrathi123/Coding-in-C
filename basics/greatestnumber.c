#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the no a=");
    scanf("%d",&a);
    printf("enter the no b=");
    scanf("%d",&b);
    printf("enter the no c=");
    scanf("%d",&c);
    printf("enter the no d=");
    scanf("%d",&d);
    if(a<b && a<c && a<d){
        printf("a is smallest no");
    }
    if(b<a && b<c && b<d){
        printf("b is smallest no");
    }
    if(c<a && c<b && c<d){
        printf("c is smallest no");
    }
    if(d<a && d<b && d<c){
        printf("d is smallest no");
    }
    return 0;
}