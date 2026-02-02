#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int result = n & (n - 1);

    printf("%d", result );

    return 0;
}
