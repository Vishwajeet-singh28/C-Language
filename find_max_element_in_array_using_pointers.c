#include<stdio.h>
int main(){
    //int arr;
    int *p;
    int n,i;
    printf("enter no.of elements in array:");
    scanf("%d",&n);
    int arr[n];
    
    p=arr;
    for(i=0;i<n;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\noriginal array:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    int max=*p;
    for(i=0;i<n;i++){
        if(*p>max){
            max=*p;
        }
        p++;
    }
    printf("max element in array is:%d",max);
    return 0;
}
