// transpos matrix

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector <vector <int>> matrix(n, vector <int>(m)); // bikin matrix dulu ygy

    // input
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    // matrix hasil transpos
    cout << "=== matrix yang di tanspos ===" << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[j][i] << ' ';
            // karena tranpos itu matrix[j][i]
        }
        cout << endl;
    }
}