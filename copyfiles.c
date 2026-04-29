#include<stdio.h>
int main(){
    FILE *f,q*;
    f=fopen("ex.txt","r");
    if(f==NULL) return 1;
    for(ch=fgetc(f);ch!=EOF;ch=fgetc(f)){
        printf("%c",ch);
    } 
    q=fopen("copied.txt","w");
    if(q==NULL) return 2;
    for(ch=fgetc(q);ch!=EOF;ch!=fgetc(q)){
        fputc(ch,q);
    }
    fclose(f);
    fclose(q);
    return 0;
}
