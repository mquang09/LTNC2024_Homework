#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, tmp;
    cin >> n;
    int a[1000000] = {0} ;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        a[tmp]++;
    }
    for (int i = 0; i < n + 1; i++){
        cin >> tmp;
        a[tmp]--;
        if (a[tmp] < 0) cout << tmp;
    }
    return 0;
}
