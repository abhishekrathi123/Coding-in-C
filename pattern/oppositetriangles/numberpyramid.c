#include<stdio.h>
int main(){
    int n,nsp=1;
    printf("enter no of rows=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("\t");
        }
        for(int k=1;k<=nsp;k++){
            printf("%d\t",k);
        }
        nsp=nsp+2;
        printf("\n");
    }
    return 0;
}