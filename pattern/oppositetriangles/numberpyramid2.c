#include<stdio.h>
int main (){
int n;
printf("enter the no of rows=");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=i-1;
    for(int j=1;j<=n-i;j++){
        printf("\t");
    }
    for(int k=1;k<=i;k++){
        printf("%d\t",k);
    }
    for(int l=1;l<=i-1;l++){
        printf("%d\t",a);
        a--;
    }
    printf("\n");
}
return 0;
}