#include<stdio.h>
int main(){
    int n;
    printf("enter the no =");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
        a=1;
        break;
        }
    }
    if(n==1){
        printf("the no is neither prime nor composite ");
    }
    if(a==0){
        printf("the no is primne no");
    }    
    if(a!=0){
        printf("the no is composite no");
    }
    return 0;
    }

