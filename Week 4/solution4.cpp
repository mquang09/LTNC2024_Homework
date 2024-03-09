#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q, k, tmp;
    cin >> n >> q;
    vector<vector<int>> a(n); 
    for (int i = 0; i < n; i++){
        cin >> k;
        for (int j = 0; j < k; j++){
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    int x, y;
    for (int i = 0; i < q; i++){
        cin >> x >> y;
        cout << a[x][y] << endl; 
    }
    return 0;
}