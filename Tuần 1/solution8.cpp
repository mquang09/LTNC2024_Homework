#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, tmp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        int prefixSum[a + 1];
        prefixSum[0] = 0;
        for (int j = 0; j < a; j++){
            cin >> tmp;
            prefixSum[j + 1] = prefixSum[j] + tmp;
        }
        int check = 0;
        for (int j = 1; j <= a; j++){
            if (prefixSum[j - 1] == prefixSum[a] - prefixSum[j]){
                cout << "YES" << endl;
                check = 1;
                break;
            }
        }
        if (!check) cout << "NO" << endl;
    }
    return 0;
}
