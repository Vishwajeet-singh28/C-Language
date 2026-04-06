#include<stdio.h>
int main (){
    int n , i;
    printf("enter the size of the array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the lements of array:");
        scanf("%d",&a[i]);
    }
    printf("original array:\n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    int *p=a;
    printf("reversed array: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(p+i));
    }
    return 0;
}
