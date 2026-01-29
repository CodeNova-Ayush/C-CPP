#include <stdio.h>
int distance(char a, char b){
    return  b - a ;
}
int main(){
    char c1,c2;
    printf("enter first character :\n");
    printf("enter second character :\n");
    scanf("%c %c", &c1 ,&c2 );
    
    int dist = distance(c1,c2);
    printf("distance between characters %c and %c is :%d" ,c1 ,c2,dist);
    
}

    
