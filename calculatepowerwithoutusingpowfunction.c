#include<stdio.h>
#include<math.h>
int power(int a,int b){
    int i,result=1;
    for(i=1;i<=b;i++){
        result=result*a;
    }
    return result;
    
    }
int main(){
    int a,b,finalanswer;
    printf("enter base and power: ");
    scanf("%d%d",&a,&b);
    finalanswer=power(a,b);
    printf("final answer= %d",finalanswer);
    return 0;
}
