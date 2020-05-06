/*
ID: likhon.1
PROG: ride
LANG: C++
*/

#include<iostream>
using namespace std;

int main(){
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    
    string s; cin >> s;
    string t; cin >> t;
    
    int x = 1, y = 1;
    for(int i = 0; s[i]; i++){
        x = (x % 47) * ((s[i] - 'A' + 1) % 47);
        x %= 47;
    }
    for(int i = 0; t[i]; i++){
        y = (y % 47) * ((t[i] - 'A' + 1) % 47);
        y %= 47;
    }
    
    if(x == y)
        cout << "GO\n";
    else
        cout << "STAY\n";
    
    return 0;
}

