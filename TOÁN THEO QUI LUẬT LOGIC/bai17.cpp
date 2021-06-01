#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin.clear();
    cin >> S;
    int temp1 = 0,temp2 = 0;
    for (auto &item:S){
        if (item == '(') temp1 += 1;
        if (item == ')') temp2 += 1;
        if (temp1 < temp2){
            cout << "NO";
            return 0;
        }
    }
    if (temp1 == temp2) cout << "YES";
    else cout <<"NO";
    return 0;
}