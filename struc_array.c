#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Employee e[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &e[i].id);
        scanf("%s", e[i].name);
        scanf("%f", &e[i].salary);
    }

    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    }

    printf("Highest Salary Employee:\n");
    printf("ID: %d\n", e[maxIndex].id);
    printf("Name: %s\n", e[maxIndex].name);
    printf("Salary: %.2f\n", e[maxIndex].salary);

    return 0;
}
