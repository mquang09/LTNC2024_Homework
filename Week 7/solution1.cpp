#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int a[], int left, int right, int x){
    int mid = (left + right) / 2;
    if (left > right) return false;
    if (a[mid] == x) return true;
    else if (a[mid] < x) binarySearch(a, mid + 1, right, x);
    else binarySearch(a, left, mid - 1, x); 
}

int main(){
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cin >> x;
    if (binarySearch(a, 0, n - 1, x)) cout << "YES";
    else cout << "NO";
    return 0;
}