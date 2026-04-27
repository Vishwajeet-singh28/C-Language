#include<stdio.h>
#include<stdlib>

int main(){
    int *a,*b,*c;
    int n1,n2,i;
    
    printf("enter no. of elements in 1st array: ");
    scanf("%d",&n1);
    
    a=(int*)malloc(n1*sizeof(int));
    if(a==NULL) return 1;
    
    for(i=0;i<n1;i++){
    printf("enter element %d: ",i+1);
    scanf("%d",&a[i]);
    }
    
    printf("enter no. of element in 2nd array: ");
    scanf("%d",&n2);
    
    b=(int*)malloc(n2*sizeof(int));
    if(b==NULL) return 2;
    
    for(i=0;i<n2;i++){
    printf("enter element %d: ",i+1);
    scanf("%d",&b[i]);
    }
    
    c=(int*)malloc((n1+n2)*sizeof(int));
    if(c==NULL) return 3;

    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    
    for(i=0;i<n2;i++){
       c[n1+i]=b[i]; 
    }
    printf("\nthird array:\n");
    for(i=0;i<(n1+n2);i++){
        printf("%d ",c[i]);
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
