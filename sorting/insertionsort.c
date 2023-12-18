#include<stdio.h>
int main(){
    int arr[7]={7,6,5,4,3,2,1};
    int n=7;
    printf("unsorted array");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    printf("\nsorted array");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}