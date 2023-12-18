#include<stdio.h>
void swap(int p,int q);
int main(){
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    swap( a,b);
}
void swap(int p,int q){
    int temp;
    temp=p;
    p=q;
    q=temp;
    printf("values after swapping%d\n%d",p,q);
}