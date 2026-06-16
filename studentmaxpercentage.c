#include <stdio.h>

struct student {
    int roll;
    char name[100];
    int marks;     
    float percentage;
};

int main() {
    int n, sub, i, j;
    float total;
    int maxIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects: ");
    scanf("%d", &sub);

    struct student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);

        total = 0;

        for(j = 0; j < sub; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        s[i].percentage = (total / (sub * 100.0)) * 100;
    }

    for(i = 1; i < n; i++) {
        if(s[i].percentage > s[maxIndex].percentage) {
            maxIndex = i;
        }
    }

    printf("\nStudent with maximum percentage:\n");
    printf("Roll No: %d\n", s[maxIndex].roll);
    printf("Name: %s\n", s[maxIndex].name);
    printf("Percentage: %.2f\n", s[maxIndex].percentage);

    return 0;
}
