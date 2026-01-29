#include<stdio.h>
int main(){
    char c;
    printf("enter lowercase character ");
    scanf("%c", &c);
    char uppercased = c-32;
    printf("uppercased character %c", uppercased);
}