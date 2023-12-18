#include<stdio.h>
int main(){
    int n;
    printf("enter the no =");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int r=i;
        int ld,sum =0;
        while(r>0){
            ld=r%10;
            sum =sum+(ld*ld*ld);
            r=r/10;
        }
        if(i==sum){
            printf("%d is a armstrong no\n",i);
        }
    }
    return 0;
}