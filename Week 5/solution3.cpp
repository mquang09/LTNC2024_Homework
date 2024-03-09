#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, tmp, pos, start, end;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> pos;
    v.erase(v.begin() + pos - 1);
    cin >> start >> end;
    v.erase(v.begin() + start - 1, v.begin() + end - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}