#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f;
    char ch;
    int dc=0,ac=0,sc=0;
    f=fopen("ex.txt","r");
    if(f==NULL) return 0;
    while(fscanf(f,"%c",&ch)!=EOF){
        if(ch>='0'&&ch<='9'){
            dc++;
        }
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            ac++;
        }
        else{
            sc++;
        }
    }
    printf("digit count=%d",dc);
    printf("alphabet count=%d",ac);
    printf("special character count=%d",sc);
    fclose(f);
    return 0;
}
