#include<stdio.h>
int main(){
    char s1[100], s2[100];
    int i;
    printf("enter your string:");
    gets(s1);
    char *P=s1;
    char *q=s2;
    for(i=0;*(P+i) != '\0';i++){
        //P++;
        *(q+i) = *(P+i);
    }
    *(q+i)='\0';
    printf("copied string is:");          //if we dont want to use [ *(q+i)='\0';] this 
    for(i=0;*(P+i);i++){                 //for(i=0;*(q+i) !='\0';i++){
        printf("%c",*(q+i));            //  printf("%c",*(q+i));}
    }
    
}
