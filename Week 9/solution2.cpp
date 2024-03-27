#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string n;
    cin >> a >> b;
    cin.ignore();
    getline(cin , n);
    cout << a + i << endl;
    cout << fixed << setprecision(1) << d + b << endl;
    cout << s << n;
    return 0;
}