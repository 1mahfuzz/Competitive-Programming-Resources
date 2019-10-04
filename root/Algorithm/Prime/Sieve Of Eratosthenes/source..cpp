/**
 *  author: mahfuzz
 *  created: 24.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> vec;
bool mark[10000005];

void sieve(int max_n){
    for(int i = 2; i <= max_n; i++){
        if(!mark[i]){
            for(int j = i * i; j <= max_n; j += i)
                mark[j] = true;
            
            vec.push_back(i);
        }
    }
}


int main(){
    
    sieve(10);
    for(int a : vec){
        cout << a << "\n";
    }
    
    return 0;
}
