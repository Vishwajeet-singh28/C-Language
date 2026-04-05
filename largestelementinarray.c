#include<stdio.h>
int main(){
    int n , i ;
    printf("enter the seze of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
    printf("enter elements of array:");
    scanf("%d",&a[i]);}
    
    printf("original array:\n");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);}
    
    int *p=a;
    int max=*p;
    for(i=0;i<n;i++){
        if(*(p+i)>max){
            max=*(p+i);}
    }

printf("max in array is %d",max);
return 0;
}
