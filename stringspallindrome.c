#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i=0,j,c;
    printf("enter string:");
    fgets(s1,sizeof(s1),stdin);
    //counting
    for(i=0;s1[i]!='\0';i++){}
    printf("length=%d\n",i);
    //copying
    j=i-2;
    for(i=0;s1[i]!='\0';i++){
        s2[i]=s1[i];}
    s2[i]='\0';
    //reverse
    for(i=0;i<j;i++,j--){
        c=s1[i];
        s1[i]=s2[j];
        s2[j]=c;
    }
    //comparing
    if(strcmp(s1,s2)==0){
        printf("pallindrome\n");}
    else{
        printf("not pallindrome");}
}
