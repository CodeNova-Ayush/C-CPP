#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int max = *ptr;
    int min = *ptr;

    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max)
            max = *(ptr + i);

        if(*(ptr + i) < min)
            min = *(ptr + i);
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
