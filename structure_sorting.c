#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n], temp;

    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted List (Descending Marks):\n");

    for(int i = 0; i < n; i++) {
        printf("Roll: %d  Name: %s  Marks: %.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
