#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n-1];
    int x1=0,x2=0;

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        x1 ^= arr[i];
    }

    for(int i=1;i<=n;i++)
        x2 ^= i;

    cout<<"Missing number = "<< (x1 ^ x2);
}
