#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }

    // transpose (swap)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}