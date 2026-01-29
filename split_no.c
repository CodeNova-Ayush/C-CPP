#include <stdio.h>
void split(int x){
    int A=x/100;
    int B = (x/10)%10;
    int C = x % 10;
    printf("%d %d %d", A , B , C);
}

int main(){
    int n;
    scanf("%d", &n);
    split(n);
    return 0;
}