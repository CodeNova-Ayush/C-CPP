#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp=n;
    int binary=0;
    int place=1;
    if(n==0){
        printf("0");
        return 0;
    }
    while(temp>0){
        binary=binary+(temp%2)*place;
        temp=temp/2;
        place=place*10;

    }
    printf("%d", binary);
    return 0;
}
