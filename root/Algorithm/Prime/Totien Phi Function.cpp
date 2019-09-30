/**
 *  author: mahfuzz
 *  created: 24.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool mark[10000005];
int phi[10000005];

void calcPhi(int max_n){
    
    for(int i = 0; i <= max_n; i++)
        phi[i] = i;
    
    
    for(int i = 2; i <= max_n; i++){
        if(!mark[i]){
            phi[i] = i - 1;
            
            for(int j = i * i; j <= max_n; j += i){
                mark[j] = true;
                
                phi[j] -= phi[j] / i;
            }
            
        }
    }
}



int main(){
    
    calcPhi(1000005);
    
    int x;
    while(cin >> x && x != 0)
        cout << phi[x] << "\n";
    
    
    return 0;
}
