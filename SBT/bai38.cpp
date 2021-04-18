#include<bits/stdc++.h>
using namespace std;
int main(){
    float A,s = 0;
    cin >> A;
    int i= 1;
    while(true){
        s += 1/i;
        ++i;
        if (s > A) break;
    }
    cout << i;
    return 0;
}