#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,S = 0,temp = 0;
    cin >> k;
    int n;
    while(cin >> n){
        if (n == 0) break;
        if (n < k){
            ++temp;
            S += n;
        }
    }
    if (temp == 0) cout << 0;
    else{
        cout << temp << "\n";
        cout << S;
    }
    return 0;
}