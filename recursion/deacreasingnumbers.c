#include<stdio.h>
void deacreasing(int n){
    if(n==0)return;
    printf("%d\n",n);
    deacreasing(n-1);
    return ;
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    deacreasing(n);
    return 0;
}