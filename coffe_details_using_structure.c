#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct coffee{
    char coffee_name[20];
    int quantity;
    int price;
};
int main(){
    int i,n;
    printf("enter no.of types of coffee:");
    scanf("%d",&n);
    struct coffee c[n];
    for(i=0;i<n;i++){
        printf("enter name of coffee:");
        scanf(" %s[^\n]",c[i].coffee_name);
        printf("\nenter quantity:");
        scanf("%d",&c[i].quantity);
        printf("\nenter price:");
        scanf("%d",&c[i].price);
    }
    for(i=0;i<n;i++){
        if(c[i].quantity==150 && strcmp(c[i].coffee_name, "black")==0){
            printf("%d",c[i].price);
        }
    }
    return 0;
}
