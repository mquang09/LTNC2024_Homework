#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, t;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        a = t;
        int cnt = 0;
        while (t != 0){
            int tmp = t % 10;
            if (tmp != 0 && a % tmp == 0) cnt++;
            t /= 10;
        }
        cout << cnt << endl;
    }
    return 0;
}
