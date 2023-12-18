#include<stdio.h>
int main(){
    int n , sum;
    printf("enter the no = ");
    scanf("%d",&n);
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum =-n/2+n;
    }
     printf("sum of the series=%d",sum);
     return 0;
}