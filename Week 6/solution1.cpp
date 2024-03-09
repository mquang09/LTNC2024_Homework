#include <bits/stdc++.h>

using namespace std;

struct Student{
    int age, standard;
    string first_name, last_name;
    friend istream& operator >> (istream& in, Student& x){
        in >> x.age >> x.first_name >> x.last_name >> x.standard;
        return in;
    }
    friend ostream& operator << (ostream& out, Student x){
        out << x.age << " " << x.first_name << " " << x.last_name << " " << x.standard;
        return out;
    }
};

int main() {
    Student st;
    cin >> st;
    cout << st;    
    return 0;
}