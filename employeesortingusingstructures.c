#include<stdio.h>
struct employee{
    int salary;
    char name[100];
    char dept[100];
    int id;
};
int main(){
    int i , n,j;
    printf("enter the no. of employee:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("enter details of employee:%d\n",i+1);
        printf("enter id:");
        scanf("%d",&e[i].id);
        printf("enter name:");
        scanf(" %[^\n]",e[i].name);
        printf("enter salary:");
        scanf("%d",&e[i].salary);
        printf("enter dept:");
        scanf(" %[^\n]",e[i].dept);
        getchar();
    }
    //sorting
    printf("----salary of employee in ascending order----");
    
    struct employee c;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(e[i].salary<e[j].salary){
                c=e[i];
                e[i]=e[j];
                e[j]=c;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("\nemployee %d",i+1);
        printf("\nname-%s\nsalary-%d\ndept-%s",e[i].name,e[i].salary,e[i].dept);
        printf("\n");
    }
    return 0;
}
