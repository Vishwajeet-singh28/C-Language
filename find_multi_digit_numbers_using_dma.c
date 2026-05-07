#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n;
    int ec=0,oc=0,c=0;
    printf("enter the no. of elements:");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL) return 0;
    int i;
    for(i=0;i<n;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\noriginal array - ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++){
        if(abs(a[i]) >=10){
            c++;
        }
    }
    printf("\nno. of multi digit numbers : %d",c);
    free(a);
    return 0;
}
