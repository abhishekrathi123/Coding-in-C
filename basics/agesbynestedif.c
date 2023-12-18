#include<stdio.h>
int main (){
    int r,s,a;//r=ram age,s= shyam age,a=ajay age
    printf("enter ram's age = ");
    scanf("%d",&r);
    printf("enter shyam's age = ");
    scanf("%d",&s);
    printf("enter ajay's age = ");
    scanf("%d",&a);
    if(r>s){
        if(r>a){
            printf("ram is older");
        }
        else{
            printf("ajay is older");
        }
    }
    if(s>r){
        if(s>a){
            printf("shyam is older");
        }
        else{
            printf("ajay is older");
        }
    }
    return 0;
}