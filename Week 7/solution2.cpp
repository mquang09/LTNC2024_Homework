#include <bits/stdc++.h>

using namespace std;

bool check = false;

void sinh(string &s){
    int i = 2;
    while (i >= 0 && s[i] == '3'){
        i--;
    }
    if (i >= 0){
        s[i] = (char)(s[i] + 1);
        for (int k = i + 1; k <= 2; k++){
            s[k] = '0';
        }
    }
    else check = true;
}

int main(){
    char a[4] = {'a', 'b', 'c', 'd'};
    string s = "000";
    while (!check){
        for (int i = 0; i < s.length(); i++){
            cout << a[s[i] - '0'];
        }
        cout << endl;
        sinh(s);
    }
    return 0;
}