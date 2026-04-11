#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,*A,i;
    printf("enter the number of element : ");
    scanf("%d", &n);
    A=(int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("enter the element %d : ",i+1);
        scanf("%d", &A[i]);
    }
    int sum=0,avg;
    for(i=0;i<n;i++){
        sum =sum + A[i];
    }
    avg=sum/n;
    printf("sum of the array : %d\n",sum);
    printf("average of array : %d\n",avg);
    free(A);
    return 0;
}
