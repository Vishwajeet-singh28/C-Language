#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *f,*q;
    char word[100], replaced[50], str[100];
    f=fopen("ex.txt","r");
    if(f==NULL) return 1;
    q=fopen("replaced.txt","w");
    if(q==NULL) return 2;
    printf("enter the word you want to replace: ");
    scanf("%s",word);
    printf("enter new word:");
    scanf("%s",replaced);
    for(;fscanf(f,"%s",str)!=EOF;){
        if(strcmp(str,word)==0){
            fprintf(q,"%s ",replaced);
        }
        else{
            fprintf(q,"%s ",str);
        }
    }
        fclose(f);
        fclose(q);
        
        remove("ex.txt");
        rename("replaced.txt","ex.txt");
        return 0;
}
