#include<stdio.h>
struct student{
    int roll;
    char name[100];
    int marks;
};
int main(){
    struct student s[3];
    int i;
    
    for(i=0;i<3;i++){
    printf("enter roll no. of the student:");
    scanf("%d",&s[i].roll);
    printf("enter name of the student:");
    scanf("%s",s[i].name);
    printf("enter the marks obtained by student:");
    scanf("%d",&s[i].marks);
    }
    
    
    for(i=0;i<3;i++){
        printf("roll no. of student:%d\n",s[i].roll);
        printf("name of student:%s\n",s[i].name);
        printf("marks of student:%d\n",s[i].marks);
        
    }
    return 0;
}
