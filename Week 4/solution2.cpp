#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int res = INT_MAX;
    for (auto i = mp.begin(); i != mp.end(); i++){
        res = min(res, n - i->second);
    }
    cout << res;
    return 0;
}