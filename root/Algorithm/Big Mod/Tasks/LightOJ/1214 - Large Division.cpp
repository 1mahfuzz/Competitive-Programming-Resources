/**
 *  author: mahfuzz
 *  created: 23.09.2019
**/
//http://lightoj.com/volume_showproblem.php?problem=1214
#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int max_n = 1000005;
typedef long long ll;

ll largeDiv(string s, ll m){
    ll curr = 0;
    ll i = 0;
    if(s[0] =='-')
        i = 1;
       
    for(; i<s.size(); i++){
        ll dig = s[i] - '0';
        curr = ((curr * 10)+ dig)%m;
 
    }
   
    return curr;
}
 
 
int main(int argc, char* argv[]){
   
    int t; cin >> t;
    
    string s;
    ll x;
   
    for(int i=1; i<= t; i++){
       cin >> s;
       cin >> x;
       
        if(largeDiv(s, abs(x)) == 0)
            cout << "Case " << i << ": "<< "divisible\n";
        else
            cout << "Case " << i << ": "<< "not divisible\n";
    }
   
   
    return 0;
}
