#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int last4 = n & 15;  

    int count = 0;

    for(int i = 0; i < 4; i++){
        if(last4 & 1){
            count++;
        }
        last4 = last4 >> 1;
    }

    printf("%d", count);

    return 0;
}
