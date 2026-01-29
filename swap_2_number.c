#include<stdio.h>
int swapa(int x,int y){
    return y;

}
int swapb(int x,int y){
    return x;
}
int main(){
    int a,b;
    scanf("%d %d", &a ,&b);
    int newA=swapa(a,b);
    int newB=swapb(a,b);
    printf("After swapping: a=%d, b=%d\n", newA, newB);
    return 0;
}