#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll factorial(int n){
    if (n == 1) return 1;
    return 1ll * n * factorial(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}