#include <stdio.h>

struct Unique {
    int val;
    int flag;
};

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    struct Unique u[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        u[i].flag = 1;
    }

    for(int i = 0; i < n; i++) {
        if(u[i].flag == 1) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    u[j].flag = 0;
                }
            }
        }
    }

    printf("Array without duplicates:\n");

    for(int i = 0; i < n; i++) {
        if(u[i].flag == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
