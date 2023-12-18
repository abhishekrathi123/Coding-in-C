#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int j=1;j<=n-i;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            char d=(char)k+64;
            printf("%c\t",d);
        }
        for(int l=1;l<=i-1;l++){
            char e=(char)a+64;
            printf("%c\t",e);
            a--;
        }
        printf("\n");
    }
    return 0;
}