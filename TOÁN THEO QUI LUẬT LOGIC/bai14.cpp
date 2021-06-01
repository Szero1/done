#include <bits/stdc++.h>
using namespace std;

float sum_(vector<float> &a){
    float temp = 0;
    for (int i = 0;i<a.size();++i) temp += a[i]*a[i];
    return temp;
}

int main(){
    int n;
    cin >> n;
    if (n<2 || n > 40) return 0;
    vector<float> a(n);
    for (float &item:a) cin >> item;
    if (count(a.begin(),a.end(),0) == n) return 0;
    for (int i = 0;i<n;++i) a[i] = a[i] / sqrt(sum_(a));
    for (auto &item:a) cout << fixed << setprecision(4) << item << " ";
    return 0;
}