#include<stdio.h>
int main(){
    int n;
    printf("enter the no=");
    scanf("%d",&n);
    for(int i=1;i<=(n*10);i++){
        if(i%n==0)
        printf("%d\n",i);
    }
    return 0;
}