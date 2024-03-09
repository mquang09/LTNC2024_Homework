#include <bits/stdc++.h>
using namespace std;

int dx[6] = {0, 0, 0, 1, 1, 1};
int dy[6] = {-1, 1, 0, -1, 1, 0};
bool ok = false;
int m, n;
string s[1000];
bool check[1000][1000] = {false};

void loang(int x, int y){
    if (x == n - 1){
        ok = true;
        return;
    }
    for (int i = 0; i < 3; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        int x2 = x + dx[i + 3];
        int y2 = y + dy[i + 3];
        if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && x2 >= 0 && x2 < n && y2 >= 0 && y2 < m && check[x2][y2] == false && s[x1][y1] != 'R' && s[x2][y2] != 'R'){
            check[x2][y2] = true;
            loang(x2, y2);
        }
    }
}
int main(){
    cin >> m >> n;
    int xPos, yPos;
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    for (int i = 0; i < m; i++){
        if (s[0][i] == 'Y'){
            xPos = 0;
            yPos = i;
        }
    }
    loang(xPos, yPos);
    if (ok) cout << "YES";
    else cout << "NO";
    return 0;
}