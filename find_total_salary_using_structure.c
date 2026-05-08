#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
    int id;
    char name[20];
    int bs;
    int ts;
};
int main(){
    int n,i;
    int ta,da,ts;
    printf("enter no. of employee:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("enter details of %dst employee:",i+1);
        printf("\nenter name: ");
        scanf(" %[^\n]",e[i].name);
        printf("\nenter id: ");
        scanf("%d",&e[i].id);
        printf("\nenter bs: ");
        scanf("%d",&e[i].bs);
    }
    for(i=0;i<n;i++){
        ta=0.22*e[i].bs;
        da=0.15*e[i].bs;
        e[i].ts=e[i].bs+ta+da;
    }
    for(i=0;i<n;i++){
        printf("name=%s\n",e[i].name);
        printf("id=%d\n",e[i].id);
        printf("ts=%d",e[i].ts);
    }
    return 0;
}
