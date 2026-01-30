#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;++i){
        scanf("%d", &arr[i]);

    }
}
 int sorting=1;
 for(int i=1;i<n;++i){
    if(arr[i]<arr[i-1]){
        sorting=0;
        break;
    }
 }
 if(sorting){
     printf("Array is sorted");
 }else{
     printf("Array is not sorted");
 }