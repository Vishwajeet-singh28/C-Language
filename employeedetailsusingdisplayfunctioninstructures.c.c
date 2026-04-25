#include<stdio.h>
struct employee{
    char name[100];
    int id;
    int salary;
    char dept[50];
};
int display(struct employee e[],int n,int ID){
    int i,f=0;
    for(i=0;i<n;i++){
        if(e[i].id==ID){
            printf("name-%s\nsalary-%d\ndept-%s",e[i].name,e[i].salary,e[i].dept);
            f=1;
        }
    }
    if(f==0){
        printf("no record found !!!");
    }
    return 0;
}
int main(){
    int i,n;
    printf("enter the no. of employee:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("enter details of the employees:\n");
        printf("enter name of employee:");
        scanf(" %[^\n]",e[i].name);
        getchar();
        printf("enter id");
        scanf("%d",&e[i].id);
        getchar();
        printf("salary:");
        scanf("%d",&e[i].salary);
        getchar();
        printf("dept:");
        scanf(" %[^\n]",e[i].dept);
        getchar();
    }
    int ID;
    printf("enter id you want to find :");
    scanf("%d",&ID);
    display(e,n,ID);
    return 0;
}
