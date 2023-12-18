#include<stdio.h>
int main(){
    int n;
    printf("enter the no =");
    scanf("%d",&n);
    float a=100;
    for(int i=100;i>=n;i--){
        printf("%f\n ",a);
        a=a/2;
    }
    return 0;
}