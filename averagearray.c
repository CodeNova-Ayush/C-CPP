#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;     
    
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i <N; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    double average = sum / N;

    printf("%f", average);

    return 0;
}
