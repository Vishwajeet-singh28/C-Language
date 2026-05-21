#include<stdio.h>
#include<string.h>

struct mystructure{
    int mynum;
    int myletter;
};

int main(){
    struct mystructure s1;
    struct mystructure s2;
    
    s1.mynum=12;
    s1.myletter='V';
    
    s2.mynum=24;
    s2.myletter='J';
    
    printf("my number= %d\n", s1.mynum);
    printf("my letter=%c\n", s1.myletter);
    
    printf("my number=%d\n",s2.mynum);
    printf("my letter=%c\n",s2.myletter);
    
    return 0;
}
