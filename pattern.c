#include<stdio.h>
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main(){
    int t;
    printf("enter t:");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        printf("enter n: ");
        scanf("%d",&n);
        pattern(n);
    }
    return 0;
}
