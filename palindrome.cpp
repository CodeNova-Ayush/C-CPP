#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int rev =0;
    int dup = n;
    while(n>0){
        int ls = n%10;
        rev = (rev*10)+ls;
        n = n/10;

    }
    if(rev == dup){
        cout << "true";

    }else{
        cout << "false";
    }
    return 0;
}