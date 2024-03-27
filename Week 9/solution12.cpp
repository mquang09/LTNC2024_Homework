#include <bits/stdc++.h>

using namespace std;

int dx[7] = {0, 0, 0, 1, 2, 2, 2};
int dy[7] = {0, 1, 2, 1, 0, 1, 2};

int main(){
    int n = 6;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int res = INT_MIN;
    for (int i = 0; i < n - 2; i++){
        for (int j = 0; j < n - 2; j++){
            int sum = 0;
            for (int k = 0; k < 7; k++){
                int x = i + dx[k];
                int y = j + dy[k];
                sum += a[x][y];
            }
            res = max(res, sum);
        }
    }
    cout << res;
    return 0;
}