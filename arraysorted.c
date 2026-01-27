#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }

    int ascending = 1;
    int descending = 1;

    for (int i = 1; i < n; ++i){

        if(arr[i] < arr[i-1]){
            ascending = 0;
        }

        if(arr[i] > arr[i-1]){
            descending = 0;
        }
    }

    if(ascending == 1){
        printf("Ascending");
    }
    else if(descending == 1){
        printf("Descending");
    }
    else{
        printf("Not Sorted");
    }

    return 0;
}
