#include<stdio.h>
int main(){
    char str[100],ch;
    int i=0,c=0;
    printf("enter string:");
    gets(str);
    printf("enter character you want to count:");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        if(ch==str[i]){
            c++;
        }
    }
    printf("%c found %d time",ch,c);
    
}
