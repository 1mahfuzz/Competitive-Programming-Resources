/*
ID: likhon.1
PROG: friday
LANG: C++
*/

#include<iostream>
using namespace std;

bool check(int year){
    return (((year % 4 == 0) && (year % 100 != 0))
            || (year % 400 == 0));    
}

int main(){
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    
    int n; cin >> n;
    int arr[10] = {0};
    
    int cnt = 2, day = 30;
    for(int i = 1900; i <= 1900 + n - 1; i++){
        for(int j = 1; j <= 12; j++){
            if(j == 4 || j == 6 || j == 9
                || j == 11)
                day = 30;
            else if(check(i) && j == 2)
                day = 29;
            else if(j == 2)
                day = 28;
            else
                day = 31;
            
            for(int k = 1; k <= day; k++){
                if(k == 13){
                    arr[cnt % 7]++;
                }
                ++cnt;
            }
        }
    }
    
    cout << arr[0] << " " << arr[1] << " " << arr[2] 
        << " " << arr[3] << " " << arr[4] << " "
        << arr[5] << " " << arr[6] << "\n";
    
    
    return 0;
}

