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
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}