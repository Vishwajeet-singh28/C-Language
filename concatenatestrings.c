#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i=0,l2,l1;
    printf("enter first string:");
    gets(s1);
    printf("enter second string:");
    gets(s2);
    for(i=0;s1[i]!='\0';i++){}
    l1=i;
    printf("length of first string:%d\n",l1);
    for(i=0;s2[i]!='\0';i++){}
    l2=i;
    printf("length of second string:%d\n",l2);
    for(i=0;i<l2;i++){
        s1[l1+i]=s2[i];
    }
    s1[l1+i] = '\0';   

    printf("concatenated string: %s", s1);

    return 0;
}
