#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp=n, digits=0;
    while(temp){ digits++; temp/=10; }

    temp=n;
    int sum=0;
    while(temp){
        int d=temp%10;
        sum += pow(d,digits);
        temp/=10;
    }

    if(sum==n) cout<<"Yes";
    else cout<<"No";
}
