#include<stdio.h>
int main(){
    int a, b;
    int *p=&a;
    int *q=&b;
    int c;
    printf("enetr a and b: ");
    scanf("%d%d",&a,&b);
    c=*p+*q;
    printf("sum of both the numbers are: %d",c);
    return 0;
}
