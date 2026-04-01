#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0 ;
    printf("enter string 1:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter string 2:");
    fgets(str2,sizeof(str2),stdin);
    //removing new line charater from str1
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]=='\n'){
            (str1[i]='\0');{
                break;
            }
        }
    }
    //removing new line chrct. from str2
    for(i=0;str2[i]!='\0';i++){
        if(str2[i]=='\n'){
            (str2[i]='\0');{
                break;
            }
            
        }
        
    }
    //finding lenth of string
    for(i=0;str1[i]!='\0';i++){
        
    }
        printf("length of string =%d\n",i);
    //comparing
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            printf("strings are not  equal");
            return 0;
        }}
            
            printf("strings are eqaul");
}
