#include<stdio.h>
int main(){
    int i,n,c=0,sum=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("original array:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    int *p=a;
    for(i=0;i<n;i++){
        c++;
        sum=sum+*(p+i);
        
    }
    printf("no. of element in array is %d\n",c);
    printf("sum of elements in array is %d",sum);
    return 0;
}
