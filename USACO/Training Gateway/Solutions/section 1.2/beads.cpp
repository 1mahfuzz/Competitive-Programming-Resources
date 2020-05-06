/*
ID: likhon.1
PROG: beads
LANG: C++
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    freopen("beads.in", "r", stdin);
    freopen("beads.out", "w", stdout);
    
    int n; cin >> n;
    string s; cin >> s;
    
    s += s;
    
    int mx = 0;
    for(int i = 0; i < s.length() - 1; i++){
        int l = i, r = i + 1;
        char l1 = s[i], r1 = s[i + 1];
        while(l > 0){
            if(l1 == 'w' || s[l - 1] == 'w' || s[l - 1] == l1){
                --l;
                if(s[l] != 'w') l1 = s[l];
            }else break;
        }
        while(r < s.length() - 1){
            if(r1 == 'w' || s[r + 1] == 'w' || s[r + 1] == r1){
                ++r;
                if(s[r] != 'w' ) r1 = s[r];
            }else break;
        }
    
        
        mx = max(mx, r-l+1);
    }
    mx = min(mx, n);
    
    cout << mx << "\n";
    
    
    
    return 0;
}

