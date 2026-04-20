include<stdio.h>
struct student{
    int roll;
    char name[100];
    int marks;
};
int main(){
    struct student s[5];
    int i,maxindex=0;
    for(i=0;i<5;i++){
        printf("enter student details:%d\n",i+1);
        printf("enter roll no. of student:");
        scanf("%d",&s[i].roll);
        printf("enter name of the student:");
        scanf("%s",&s[i].name);
        printf("enter the marks of the student:");
        scanf("%d",&s[i].marks);
    }
    for(i=0;i<5;i++){
        if(s[i].marks>s[maxindex].marks){
            maxindex=i;
        }
    }
    printf("topper student details are:\n");
    printf("roll no=%d\n",s[maxindex].roll);
    printf("name=%s\n",s[maxindex].name);
    printf("marks=%d\n",s[maxindex].marks);
    return 0;
    
}
