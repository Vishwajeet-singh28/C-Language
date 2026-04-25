#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n;
    printf("enter no. of elements in array:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) return 1;
    int i;
    for(i=0;i<n;i++){
        printf("enter elements:%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}
