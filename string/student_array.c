#include <stdio.h>

struct student{
    char name[50];
    int age;
    int roll;
    float m1, m2, m3;
};

int main(){
    struct student s1;

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &s1.m1, &s1.m2, &s1.m3);

    printf("\nStudent Details:\n");
    printf("Name: %s", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks in Subject 1: %.2f\n", s1.m1);
    printf("Marks in Subject 2: %.2f\n", s1.m2);
    printf("Marks in Subject 3: %.2f\n", s1.m3);

    return 0;
}
