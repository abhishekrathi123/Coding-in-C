#include<stdio.h>
int main(){
    int num,reversednum = 0;
    printf("enter a number = ");
    scanf("%d",&num);
    while (num!=0){
        int remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num=num/10;
    }
    printf("reversed number : %d\n",reversednum);
    return 0;
}