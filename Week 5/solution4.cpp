#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> tmp;
        auto pos = lower_bound(v.begin(), v.end(), tmp);
        if (*pos == tmp) cout << "Yes " << pos - v.begin() + 1 << endl;
        else cout << "No " << pos - v.begin() + 1<< endl;
    }
    return 0;
}