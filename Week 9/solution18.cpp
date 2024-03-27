#include <bits/stdc++.h>

using namespace std;

int main(){
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int fine;
    if (y1 > y2){
        fine = 10000;
    }
    else if (m1 > m2 && y1 == y2){
        fine = (m1 - m2) * 500;
    }
    else if (d1 > d2 && y1 == y2){
        fine = (d1 - d2) * 15;
    }
    else fine = 0;
    cout << fine;
    return 0;
}