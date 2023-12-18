#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    int c[6];
    for(int i=0;i<5;i++){
        c[i]=0;
        c[i]= a[i]+b[i];
    }
    printf("sum of the given array is %d",c[6]);
    return 0;
}