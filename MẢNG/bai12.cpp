#include <bits/stdc++.h>
using namespace std;
vector<int> A,f;
int n,S = 0,k=2;

map<int,int> idx(){
    map<int,int> temp;
    for (int i = 0;i<n;++i){
        if (S % f[i] == 0){
            temp[i] = 1; k = 2;
            Start:
                int it = lower_bound(f.begin(),f.end(),f[i] * k) - f.begin();
                if (f[it] > f[i] * k) break;
                ++k; temp[it] = 1;
                if (S == f[it]) return temp;
            goto Start;
        }
        temp.clear();
    } 
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    for (int x,i = 0;i<n;++i){
        cin >> x;
        S += x;
        A.push_back(x);
        f.push_back(S); 
    }
     
    map<int,int> idex = idx();
    if (idex.size() == 1){
        for (int &item:A) cout << item << " ";
        cout << "\n";
    }else{
        for (int i = 0;i < n;++i){
        cout << A[i] << " ";
        if (idex[i]) cout << "\n";
        }
    }
    cout << "So lan chia: " << k-1;
    return 0;
}