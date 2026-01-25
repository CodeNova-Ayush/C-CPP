#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);

    }
    int target;
    scanf("%d", &target);
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]+arr[j] == target){
                printf("%d %d\n", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;

}
