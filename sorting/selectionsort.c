#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,4,5,9,8,2,1};
    printf("unsorted array");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    int n=7;
    for(int i=0;i<n-1;i++){
        int min= INT_MAX;
        int s=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                s=j;
            }
        }
        int temp=arr[s];
        arr[s]=arr[i];
        arr[i]=temp;
    }
    printf("\n");
    printf("sorted array");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}