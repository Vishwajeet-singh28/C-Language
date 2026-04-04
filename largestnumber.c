#include<stdio.h>
int main(){
    int a,b;
    int *p=&a;
    int *q=&b;
    int c;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    if(*p>*q){
        printf("a is greater than b");
    }
        else if(*q>*p){
            printf("b is greater than a");
        }
            else{
                printf("invalid input");
            }
    
    return 0;
}
