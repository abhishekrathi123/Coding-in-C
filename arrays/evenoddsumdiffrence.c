#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<=7;i++){
        if(arr[i]%2==0){
            evensum=evensum+arr[i];
        }
        else oddsum=oddsum+arr[i];
    }
    int diff=evensum-oddsum;
    printf("diffrence is %d",diff);
    return 0;
}