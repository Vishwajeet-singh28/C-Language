#include<stdio.h>
int main(){
    FILE *f;
    FILE *sort;
    int a[100],n=0,i,j,c;
    f=fopen("num.txt","r");
    if(f==NULL) return 0;
    sort=fopen("sort.txt","w");
    while(fscanf(f,"%d",&a[n])!= EOF){
        n++;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
            c=a[i];
            a[i]=a[j];
            a[j]=c;
            }
        }
    }
    for(i=0;i<n;i++){
    fprintf(sort,"%d ",a[i]);
    }
    printf("sorted array:\n");
    for(i=0;i<n-1;i++){
        printf("%d ",a[i]);
    }
    fclose(f);
    fclose(sort);
    return 0;
}
