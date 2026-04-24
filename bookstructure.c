#include<stdio.h>
struct books{
    int bookid;
    int price;
    char title[100];
    char authorname[100];
};
int main(){
    
    int i,n,j;
    
    printf("enter the no. of books:");
    scanf("%d",&n);
    struct books s[n];
    for(i=0;i<n;i++){
        printf("enter book details:%d\n",i+1);
        printf("enter title of the book:");
        scanf("%s",s[i].title);
        printf("enter author name:");
        scanf("%s",s[i].authorname);
        printf("enetr book id:");
        scanf("%d",&s[i].bookid);
        printf("enter price of the book:");
        scanf("%d",s[i].price);
    }
    for(i=0;i<n;i++){
        if(s[i].price>1500){
            printf("id:%d\n,title:%s\n,price:%d\n,authorname:%s\n",s[i].bookid,s[i].title,s[i].price,s[i].authorname);
        }
    }    
}
