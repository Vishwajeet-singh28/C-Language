#include<stdio.h>
int main(){
    int a , b;
    int *p=&a;
    int *q=&b;
    int c;
    
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    
    c=*p;
    *p=*q;
    *q=c;
    
    printf("after swapping a and b are %d , %d ",a,b);
    return 0;
    
}
