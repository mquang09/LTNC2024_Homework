#include <bits/stdc++.h>

using namespace std;

void update(int* a, int* b){
    cout << *a + *b << endl;
    cout << abs(*a - *b) << endl;
}

int main(){
    int a, b;
    int* a1 = &a;
    int* b1 = &b;
    cin >> a >> b;
    update(a1, b1);
    return 0;
}