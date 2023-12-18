#include<stdio.h>
int main(){
    int m;
    printf("enter the rows of 1st matrix :");
    scanf("%d",&m);
    int n;
    printf("enter the columns of 1st matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("enter the elements of 1st matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("enter the rows of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("enter the columns of 2nd matrix:");
    scanf("%d",&q);
    int b[p][q];
    printf("enter the elements of 2nd matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p){
        printf("multiplication is not possible");
    }
    else{
    int c[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("required matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}