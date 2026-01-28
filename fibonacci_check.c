#include <stdio.h>

int main() {
    int n = 21;
    int a = 0, b = 1, next;

    while(a < n) {
        next = a + b;
        a = b;
        b = next;
    }

    if(a == n)
        printf("Fibonacci number");
    else
        printf("Not Fibonacci");

    return 0;
}
