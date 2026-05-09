#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f,*q;
    f=fopen("num.txt","w");
    fprintf(f,"1 7 8 3 6");
    fclose(f);
    f=fopen("num.txt","r");
    if(f==NULL) return 0;
    q=fopen("div3.txt","w");
    if(q==NULL) return 0;
    int n;
    while(fscanf(f,"%d",&n)!=EOF){
        if(n%3==0){
            fprintf(q,"%d",n);
        }
    }
    fclose(q);
    q=fopen("div3.txt","r");
    while(fscanf(q,"%d",&n)!=EOF){
        printf("%d ",n);
    }
    fclose(f);
    fclose(q);
    return 0;
}
