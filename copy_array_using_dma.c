#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n,i;
    printf("enter no.of elements: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) return 1;
    for(i=0;i<n;i++){
        printf("enter elemint:%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array: \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int *temp;
    temp=(int*)malloc(n*sizeof(int));
    if(temp==NULL) return 1;
    for(i=0;i<n;i++){
    temp[i]=arr[i];
    }
    printf("\ncopied array is:\n");
    for(i=0;i<n;i++){
    printf("%d ",temp[i]); 
    }
    free(arr);
    free(temp);
    return 0;
}
