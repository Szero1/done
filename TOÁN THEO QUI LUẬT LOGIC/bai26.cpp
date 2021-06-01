#include <bits/stdc++.h>
using namespace std;

bool check(int i) {
    return ((i%2) != 0);
}

int main(){
    int N;
    cin >> N;
    if (N < 1 || N > 20) return 0;
    vector<int> A(N);
    for (int &item:A) cin >> item;
    int temp = count_if(A.begin(),A.end(),check);
    cout << temp << "\n";
    for (auto &item:A) if (item % 2 != 0) cout << item << " ";
    return 0;  
}