#include<stdio.h>

    struct student{
        char name[100];
        int age;
        float gpa;
    };
    int main(){
        struct student s1;
        printf("Enter name: ");
        fgets(s1.name, sizeof(s1.name), stdin);
        printf("Enter age: ");
        scanf("%d", &s1.age);
        printf("Enter GPA: ");
        scanf("%f", &s1.gpa);
        printf("\nStudent Details:\n");
        printf("Name: %s", s1.name);
        printf("Age: %d\n", s1.age);
        printf("GPA: %.2f\n", s1.gpa);
        return 0;

    }
