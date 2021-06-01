#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,count = 0;
    cin >> N;
    if (N < 1 || N > 20) return 0;
    vector<float> A(N);
    map<int,float> k;
    for (auto &item:A) cin >> item;
    for (int i = 1;i < N;++i)
        if (A[i] < A[i-1]){
            ++count;
            k.insert(pair<int,float>(i,A[i]));
        }
    cout << count << "\n";
    if (count > 0) for (auto &item:k) cout << item.first << " " << item.second << "\n";
    return 0;  
}