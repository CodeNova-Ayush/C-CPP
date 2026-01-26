#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);

    if (A <= 0) {
        printf("Invalid amount");
        return 0;
    }

    int n500 = 0, n200 = 0, n100 = 0;

    while (A >= 500) {
        A = A - 500;
        n500++;
    }

    while (A >= 200) {
        A = A - 200;
        n200++;
    }

    while (A >= 100) {
        A = A - 100;
        n100++;
    }

    
    printf("500-rupee notes: %d\n", n500);
    printf("200-rupee notes: %d\n", n200);
    printf("100-rupee notes: %d\n", n100);

    return 0;
}
