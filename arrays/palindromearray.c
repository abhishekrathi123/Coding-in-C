#include<stdio.h>
void reverse(int arr[]){
    int i=0,j=6;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
        if(arr[i]==arr[j])printf("the given array is palindrome");
        else printf("the given array is not palindrome");
        break;
    }
    return ;
}
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    reverse(arr);
    return 0;
}