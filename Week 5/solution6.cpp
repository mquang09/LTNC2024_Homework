#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, mark;
    string name;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 3){
            cin >> name;
            if (mp.find(name) == mp.end()) cout << 0 << endl;
            else cout << mp[name] << endl;
        }
        else if (x == 1){
            cin >> name >> mark;
            mp[name] += mark;
        }
        else if (x == 2){
            cin >> name;
            mp.erase(name);
        }
    }
    return 0;
}