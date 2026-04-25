#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n , i,s=0,avg;
    printf("enter no. of elments:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) return 1;
    for(i=0;i<n;i++){
        printf("enter element:%d\n",i+1);
        scanf("%d",&arr[i]);
        s=s+arr[i];
    }
    printf("\noriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
    printf("\nsum=%d\n",s);
    avg=s/n;
    printf("average=%d",avg);
    
    free(arr);
    return 0;
}
