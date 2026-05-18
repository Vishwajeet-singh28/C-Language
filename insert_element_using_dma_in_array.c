#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n,i;
    printf("enter no. of array:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) return 1;
    for(i=0;i<n;i++){
        printf("enter elements:%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int m;
    printf("\nenter no. of elements you want to insert: \n");
    scanf("%d",&m);
    if(m>=1){
    int *temp;
    temp=(int*)realloc(arr,(n+m)*sizeof(int));
    if(temp==NULL) return 1;
    arr=temp;
    for(i=n;i<(n+m);i++){
        printf("enter element %d you want to insert: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nelements after insertion:\n");
    for(i=n;i<(n+m);i++){
         printf("%d",arr[i]);
        }
    }
    else{
        printf("no new element inserted....");
    }
    free(arr);
    return 0;
}
