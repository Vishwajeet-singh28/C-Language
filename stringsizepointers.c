#include<stdio.h>
int main(){
    char str[100];
    int c=0,i;
    printf("enter your string:");
    gets(str);
    char *p=str;
    for(i=0;*p!='\0';i++){
        c++;
        p++;
    }
    printf("length of string is %d",c);
    return 0;
    
}
