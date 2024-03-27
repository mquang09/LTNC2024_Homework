#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string name, phoneNum;
    map<string, string> mp;
    for (int i = 0; i < n; i++){
        cin >> name >> phoneNum;
        mp[name] = phoneNum;
    }
    while (cin >> name){
        if (mp.find(name) != mp.end()) cout << name << "=" << mp[name] << endl;
        else cout << "Not found" << endl;
    }
    return 0;
}
