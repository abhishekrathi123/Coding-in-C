#include<stdio.h>
int main(){
    int arr[7]={2,14,7,8,9,3,10};
    int max=arr[0];
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("maximum array element is %d",max);
    return 0;
}