#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n-1];
    int sum = 0;

    for(int i=0;i<n-1;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int total = n*(n+1)/2;

    cout << "Missing number = " << total - sum;
}
