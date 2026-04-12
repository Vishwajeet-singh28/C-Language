#include<stdio.h>
#include<string.h>
struct mystructure{
    int mynum;
    char myletter;
    char str[100];
};

int main(){
    struct mystructure s1;
    
    s1.mynum=14;
    s1.myletter='v';
    //s1.str="vj"; // this wont work here i.e can't assign like this we have to use [strcpy] here
    strcpy(s1.str,"mera baccha h tu");
    
    printf("my number= %d\n", s1.mynum);
    printf("my letter= %c\n", s1.myletter);
    printf(" string=%s\n", s1.str);
    
    return 0;
}
