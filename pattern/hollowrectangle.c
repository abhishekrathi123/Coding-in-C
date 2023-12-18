#include<stdio.h>
int main(){
    int r,c;
    printf("enter the no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1||i==4||j==1||j==4)
            printf("* ");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}