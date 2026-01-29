#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!=0;++i){
        char c=str[i];
           if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            count++;
           }
    
    }
    printf("%d\n",count);
    return 0;
}