#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    return tmp == s;
}

int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        if (isPalindrome(s)) cout << -1 << endl;
        else{
            for (int j = 0; j < s.length() / 2; j++){
                if (s[j] != s[s.length() - j - 1]){
                    if (s[j] == s[s.length() - j - 2] && s[j + 1] == s[s.length() - j - 3]) cout << s.length() - j - 1 << endl;
                    else cout << j << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
