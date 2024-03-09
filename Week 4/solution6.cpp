#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m], minb = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lcm = a[0];
    for (int i = 1; i < n; i++){
        lcm = (a[i] * lcm) / (__gcd(a[i], lcm));
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
        minb = min(minb, b[i]);
    }
    int res = 0, tmp = lcm;
    while (tmp <= minb){
        int check = 0;
        for (int i = 0; i < m; i++){
            if (b[i] % tmp == 0) check++;
        }
        if (check == m){
            res++;
        }
        tmp += lcm;
    }
    cout << res;
    return 0;
}
