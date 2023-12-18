#include<stdio.h>
int main(){
    int n,ld,sum=0;
    printf("enter the no = ");
    scanf("%d",&n);
    int original =n;
    while(n>0){
        ld=n%10;
        sum = sum *10+ld;
        n=n/10;
    }
    if(original==sum){
        printf("the given no is palindrome ");
    }
    else printf("the given no is not palindrome");
    return 0;
}