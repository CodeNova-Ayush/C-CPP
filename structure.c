#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxLen = 1, currLen = 1;
    int endIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) {
            currLen++;
        } else {
            currLen = 1;
        }

        if(currLen > maxLen) {
            maxLen = currLen;
            endIndex = i;
        }
    }

    printf("Length = %d\n", maxLen);
    printf("Subarray: ");

    for(int i = endIndex - maxLen + 1; i <= endIndex; i++)
        printf("%d ", arr[i]);

    return 0;
}
