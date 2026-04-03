#include<stdio.h>
int main(){
    char str[100];
    int i=0,count=1;
    printf("enter string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++){}
        printf("length of string=%d\n",i);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;}}
        printf("no. of words = %d",count);}
