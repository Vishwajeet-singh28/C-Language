#include<stdio.h>
int gcd(int a , int b){
    int i,gcd=1;
    for(i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;}}
            return gcd;}

int main(){
    int a,b,result;
    printf("enter your numbers: ");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    printf("result=%d",result);
    return 0;
