#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d", &a[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;++i){
        if(a[i]%2==0){
            even+=1;
            
        }else{
            if(a[i]%2!=0){
                odd+=1;
                
            
            }
        }
    } 
    printf("%d ", even);
    printf("%d ", odd);
    return 0;
}