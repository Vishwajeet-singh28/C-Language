#include<stdio.h>
int main(){
    char str[100];
    int i,c,l=0;
    printf("enter your string:");
    gets(str);
    char *p=str;
    
    for(i=0;str[i] != '\0';i++){
        l++;}
        printf("length=%d\n ",l);
    for(i=0;i<l/2;i++){
        c=*(p+i);
        *(p+i)=*(p+l-i-1);
        *(p+l-i-1)=c;
    }
    printf("reversed string=%s",p);
    return 0;
}
