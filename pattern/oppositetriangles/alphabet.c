#include<stdio.h>
int main(){
    int r;
    printf("enter the row no=");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            printf("\t");
        }
        for(int k=1;k<=i;k++){
            char d=(char)k+64;
            printf("%c\t",d);
        }
        printf("\n");
    }
    return 0;
}