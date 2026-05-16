#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int  main(){
    int ch;
    int c=0;
    FILE *f;
    f=fopen("ex.txt","r");
    if(f==NULL)return 1;
    for(ch=fgetc(f);ch!=EOF;ch=fgetc(f)){
        if(ch=='\n'){
            c++;
        }
    }
    printf(" no. of lines:%d\n",c);
    fclose(f);
    return 0;
}
