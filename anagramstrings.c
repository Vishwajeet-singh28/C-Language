#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int i,len=0,freq[256];
    printf("enter your first string:");
    gets(str1);
    printf("enter your second string:");
    gets(str2);
    //check length
    if(strlen(str1)!=strlen(str2)){
        printf("not anagaram");
        return 0;
    }
    for(i=0;str1[i]!='\0';i++){
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }
    for(i=0;i<256;i++){
        if(freq[i] != 0){
            printf("not anagram");
            return 0;
        }
        
    }
    printf("its angaram");
    return 0;
}
