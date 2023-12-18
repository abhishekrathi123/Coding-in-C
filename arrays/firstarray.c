#include<stdio.h>
int main(){
    int arr[6];
    for(int i=0;i<=5;i++){
        printf("enter the %d element = ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}