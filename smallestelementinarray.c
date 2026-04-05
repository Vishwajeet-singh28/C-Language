#include<stdio.h>
int main(){
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("original array: \n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    int *p=a;
    int min=*p;
    for(i=0;i<n;i++){
        if(*(p+i)<min){
            min=*(p+i);}
        }
    printf("smallest element in array is %d",min);
    return 0;
    }
