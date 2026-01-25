#include <stdio.h>
#include <limits.h>

int kthSmallest(int arr[], int n, int k) {

    int prevMin = INT_MIN;
    int currMin;

    for(int count = 0; count < k; count++){

        currMin = INT_MAX;

        for(int i = 0; i < n; i++){

            if(arr[i] > prevMin && arr[i] < currMin){
                currMin = arr[i];
            }
        }

        prevMin = currMin;
    }

    return currMin;
}

int main(){
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    printf("%d", kthSmallest(arr, n, k));

    return 0;
}
