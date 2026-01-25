#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    long long sum = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = (float)sum / n;

    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > avg){
            count++;
        }
    }

    printf("Average: %.2f\n", avg);
    printf("Count greater than average: %d", count);

    return 0;
}
