#include<stdio.h>
int main(){
    void increasing(int n);
    //void deacreasing(int n);
    int n;
    printf("enter a number=");
    scanf("%d",&n);
   // deacreasing(n);
    increasing(n);
    return 0;
}
void increasing(int n){
    if(n==0)return;
    printf("%d\n",n);
    increasing(n-1);
    printf("%d\n",n);
    return ;
}
// void deacreasing(int n){
//     if(n==0)return;
//     printf("%d\n",n);
//     deacreasing(n-1);
// }