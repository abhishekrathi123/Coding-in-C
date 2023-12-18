#include<stdio.h>
int main(){
    int r;
    printf("enter the no of row=");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            printf("*\t");
        }
        for(int l=1;l<=i-1;l++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;

}