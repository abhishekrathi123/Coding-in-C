#include<stdio.h>
int main(){
    int r;
    float pi=3.14;
    printf("enter the radius = ");
    scanf("%d",&r);
    float circum = 2*pi*r;
    printf("circumference of the circle is %2f",circum);
    float area=pi*r*r;
    printf("\narea of the given circle is %2f",area);
    return 0;
}