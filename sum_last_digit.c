#include <stdio.h>
int sumlastdig(int x,int y){
    return x%10 + y%10;
}
int main(){
    int a;
    int b;
    printf("enter first number:\n");
    printf("enter second number:\n");
    scanf("%d %d", &a, &b);
    
    int z = sumlastdig( a, b);
    printf("sum of the last digit of %d and %d is :%d ", a, b, z);
    
}