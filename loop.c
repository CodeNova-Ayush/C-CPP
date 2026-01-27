#include <stdio.h>
#include <math.h>

int isPrime(int x) {

    if(x < 2) 
        return 0;

    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0)
            return 0;
    }

    return 1;
}

int main() {

    int n;
    scanf("%d", &n);

    if(isPrime(n)) {
        printf("%d", n);
        return 0;
    }

    for(int dist = 1; ; dist++) {

        int left = n - dist;
        int right = n + dist;

        if(left >= 2 && isPrime(left)) {
            printf("%d", left);
            return 0;
        }

        if(isPrime(right)) {
            printf("%d", right);
            return 0;
        }
    }

    return 0;
}
