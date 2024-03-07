#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cntNegative = 0, cntPositive = 0, cntZero = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > 0) ++cntPositive;
        else if (a[i] < 0) ++cntNegative;
        else ++cntZero;
    }
    cout << fixed << setprecision(6) << 1.00 * cntPositive / n << endl << 1.00 * cntNegative / n << endl << 1.00 * cntZero / n;
    return 0;
}
