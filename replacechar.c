#include<stdio.h>
int main(){
    char str[100],ch;
    char y;
    int i=0; 
    printf("enter strings:");
    gets(str);
    printf("enter character you want to replace:");
    scanf(" %c",&ch);
    printf("enter the replacing character :");
    scanf(" %c",&y);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            (str[i]=y);}
        }
    printf("string after replacement of characters is %s",str);
    return 0;
    }
