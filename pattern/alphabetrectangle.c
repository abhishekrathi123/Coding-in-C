#include<stdio.h>
int main (){
    int n,m;
    printf("enter the no of rows =");
    scanf("%d",&n);
    printf("enter the no of columns =");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=m;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c\t",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
} 