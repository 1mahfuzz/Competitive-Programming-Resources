/**
 *  author: mahfuzz
 *  created: 27.09.2019
**/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int BS(int x, int n){
    int lo = 0;
    int hi = n - 1;
    
    while(hi - low > 1){
        int mid = (hi + low) / 2;
        if(mid >= x)
            hi = mid -1;
        else
            lo = mid + 1;
    }
    
    
    
}

int main(int argc, char* argv[]){
    
    
    
    
    
    return 0;
}
