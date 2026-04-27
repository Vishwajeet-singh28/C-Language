#include<stdio.h>
#include<stdlib.h>
struct student{
     char name[100];
     int marks;
     int rollno;
 };
 int main(){
     int n,i;
     printf("enter no. of student:");
     scanf("%d",&n);
     struct student *s;
     s=(struct student*)malloc(n*sizeof(struct student));
     if( s==NULL) return 1;
     for(i=0;i<n;i++){
         printf("enter details of student %d:",i+1);
         printf("\nenter name:");
         scanf(" %[^\n]",s[i].name);
         printf("enter roll:");
         scanf("%d",&s[i].rollno);
         printf("enter marks:");
         scanf("%d",&s[i].marks);
     }
     printf("\n----displaying student details----\n");
     for(i=0;i<n;i++){
         printf("student name:%s\n",s[i].name);
         printf("roll no.:%d\n",s[i].rollno);
         printf("marks:%d\n",s[i].marks);
     }
     free(s);
     return 0;
     
 }
