#include<stdio.h>
int main(){
    int arr[5]={1,6,9,4,5};
    int brr[5];
    for(int i=0;i<=4;i++){
        arr[i]=arr[4-i];
        printf("%d",arr[i]);
    }
    return 0;
}