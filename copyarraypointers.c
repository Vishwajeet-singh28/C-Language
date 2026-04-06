#include<stdio.h>
int main (){
    int n,i;
    printf("enter the size of the array :");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("enter the elements of array:");
        scanf("%d",&a[i]);
    }
    printf("original array:\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    int*p=a;
    int *q=b;
    for(i=0;i<n;i++){
    *(q+i)=*(p+i);}
    
    printf("copied array is:\n");
    for(i=0;i<n;i++){
        printf("%d",*(q+i));
    }
    return 0;
}
