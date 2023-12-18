#include<stdio.h>
int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("the no is divisibkle by both");
    }
    else{
         printf("the no is not divisibkle by both");
    }
    return 0;
}