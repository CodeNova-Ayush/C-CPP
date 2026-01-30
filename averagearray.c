#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double sum=0;
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++){
        sum+=arr[i];

    }
    double average =sum/n;
    printf("%.2f", average);
    return 0;
}