#include<stdio.h>
int main(){
    int r,c;
    printf("enter rows = ");
    scanf("%d",&r);
    printf("enter columns = ");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter the elements of matrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum =0;
    for(int i=0;i<r;i++){
        for ( int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of given matrix is %d",sum);
    return 0;
}