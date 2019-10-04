/**
 *  author: mahfuzz
 *  created: 29.09.2019
**/

//problem link ; https://www.hackerrank.com/contests/springsprint/challenges/identify-smith-numbers

#include <bits/stdc++.h>
using namespace std;

int sum = 0;
void run(int n){
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            n /= i;
            
            if(i > 9){
                string s = to_string(i);
                for(int j = 0; s[j]; j++)
                    sum += s[j] - '0';
                continue;
            }
                
            sum += i;
        }
    }
    if(n > 1){
        if(n > 9){
            string s = to_string(n);
            for(int j = 0; s[j]; j++)
                sum += s[j] - '0';
        
        }else{
            sum += n;
        }
    }
    
}
// Complete the solve function below.
int solve(int n) {
    run(n);
    string s = to_string(n);
    int sum2 = 0;
    for(int i = 0; s[i]; i++)
        sum2 += s[i] - '0';
        
    if(sum == sum2)
        return 1;
    else
        return 0;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = solve(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
