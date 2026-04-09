#include<stdio.h>
int main(){
    int n ,i; 
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter array elment:");
        scanf("%d",&a[i]);
    }
    printf("original array:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    int *p=a;
    for(i=0;i<n;i++){
        printf("value of array element is %d\n",*(p+i)); //this prints value
        printf("address of array element is %p\n",(p+i)); // this prints address
    }
    return 0;
}
