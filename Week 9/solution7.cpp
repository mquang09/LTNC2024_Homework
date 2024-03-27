#include <bits/stdc++.h>

using namespace std;

void solve(string s){
    string res = "";
    for (int i = 0; i < s.length(); i += 2){
        res += s[i];
    }
    res += " ";
    for (int i = 1; i < s.length(); i += 2){
        res += s[i];
    }
    cout << res << endl;
}

int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        solve(s);
    }
}