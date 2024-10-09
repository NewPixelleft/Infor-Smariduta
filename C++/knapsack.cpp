#include <bits/stdc++.h>
#define pii pair <int, int>
using namespace std;

int n, berat_maks;
vector <pair <int, int>> item;

// comparator function
// mengembalikan true jika berat member array sebelumnya lebih kecil
bool bandingkan(pii &a, pii &b){
    return a.first < b.first;
}

int knapsack(){
    vector <vector <int>> dp(n + 1, vector <int> (berat_maks + 1));

    for (int i = 1; i <= n; i++){
        for (int berat = 1; berat <= berat_maks; berat++){
            if (i == 0 || berat == 0)
                dp[i][berat] = 0;
            else if (item[i - 1].first <= berat)
                dp[i][berat] = max(item[i - 1].second + dp[i - 1][berat - item[i - 1].first], dp[i - 1][berat]);
            else
                dp[i][berat] = dp[i - 1][berat];

        }
        cout << endl;
    }
    return dp[n][berat_maks];
}

int main(){
    // ** INPUT ** //
    cin >> n >> berat_maks;
    int input;
    for (int i = 0; i < n; i++){
        cin >> input;
        item.push_back({input, 0});
    }
    for (int i = 0; i < n; i++){
        cin >> input;
        item[i].second = input;
    }

    sort(item.begin(), item.end(), bandingkan);
    // ** INPUT **//

    cout << knapsack();
}
