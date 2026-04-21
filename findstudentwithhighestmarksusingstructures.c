#include<stdio.h>
struct student{
    int roll;
    char name[100];
    int marks;
    
};
int main(){
    struct student s[5];
    int i,maxmarks=0;
    for(i=0;i<5;i++){
        printf("enter student details: %d\n",i+1);
        printf("enter rollno. of student:");
        scanf("%d",&s[i].roll);
        printf("enter the name of the student:");
        scanf("%s",&s[i].name);
        printf("enter the marks of the student:");
        scanf("%d",&s[i].marks);
        }
        for(i=0;i<5;i++){
            if(s[i].marks>maxmarks){
                maxmarks=s[i].marks;
            }
        }
        printf("max marks=%d\n",maxmarks);
        return 0;
}
