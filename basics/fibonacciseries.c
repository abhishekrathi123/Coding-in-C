#include<stdio.h>
int main (){
    int a=1,b=1,n,sum;
    printf("enter the number =");
    scanf("%d",&n);
     printf("%d\n%d",a,b);
    for(int i=1;i<=n;i++){
     int sum =a+b;
     printf("\n%d",sum);
     a=b;
     b=sum;
    }
    //printf("%d\n%d",a,b);
    //printf("\nthe fibonacci no = %d",sum);
    return 0;
}