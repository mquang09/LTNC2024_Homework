#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int res = 1;
    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z') res++;
    }
    cout << res;
    return 0;
}