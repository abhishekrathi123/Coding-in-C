#include<stdio.h>
int main(){
    int n,ld,rev=0;
    printf("entert the no = ");
    scanf("%d",&n);
    while(n>0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    printf("reverse of the given no is = %d",rev);
    return 0;
}