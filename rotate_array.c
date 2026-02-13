#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];

    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

    for(int x: arr) cout << x << " ";
}
