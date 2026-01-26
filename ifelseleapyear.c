#include <stdio.h>

int main() {
    int Y;
    if (scanf("%d", &Y) != 1) return 0;
    if (Y <= 0) {
        printf("The given year %d is Invalid year.", Y);
        return 0;
    }
    if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0))
        printf("Yes, %d is a leap year.", Y);
    else
        printf("No, %d is not a leap year.", Y);
    return 0;
}
