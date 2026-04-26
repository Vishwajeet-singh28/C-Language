#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int i;
    int n;
    printf("enter no. of elements:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) return 1;
    for(i=0;i<n;i++){
        printf("enter elment %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int temp;
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nreverse array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
