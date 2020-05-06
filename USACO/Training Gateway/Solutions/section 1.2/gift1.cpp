/*
ID: likhon.1
PROG: gift1
LANG: C++
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    
    int n; cin >> n;
    vector<string> vec;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        vec.push_back(s);
    }
    
    map<string, int> person;
    
    string s;
    while(cin >> s){
        int amount, x; cin >> amount >> x;
        if(x == 0)
            continue;
        int k = amount / x;
        
        person[s] -= amount;
        person[s] += (amount % x);
        
        for(int i = 0; i < x; i++){
            string q; cin >> q;
            person[q] += k;
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << vec[i] << " " << person[vec[i]] << "\n";
    }
    
    return 0;
}

