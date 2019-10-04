/**
 *  author: mahfuzz
 *  created: 21.09.2019
**/

//http://lightoj.com/volume_showproblem.php?problem=1007s

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
const unsigned long long int max_n = 5000002;
typedef unsigned long long ll;

ll phi[max_n+3];
bool mark[max_n+3];

void getPhi(){
    for(ll i = 2; i <= max_n; i++)
        phi[i] = i;
    
    for(ll i = 2; i <= max_n; i++){
        if(!mark[i]){
            phi[i] = i - 1;
            for(ll j = i * 2; j <= max_n; j += i){
                phi[j] -= phi[j] / i;
                mark[j] = true;
            }
        }
    }
    
    for(ll i = 3; i < max_n; i++){
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }
    
}



int main(int argc, char* argv[]){
    //~ ios_base::sync_with_stdio(0);
    //~ cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    getPhi();
    
    int t; scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        ll a, b; scanf("%llu %llu", &a, &b);
        
        ll res = phi[b] - phi[a-1];
        
        
        printf("Case %d: %llu\n", i, res);
    }
    
    
    return 0;
}
