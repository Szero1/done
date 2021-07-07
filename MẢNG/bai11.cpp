#include <bits/stdc++.h>
using namespace std;
vector<int> A;

bool check(int l, int r){
    int mid = (l+r)/2;
    for(;l<=mid;++l,--r){
        if (A[l] != A[r]) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int x,i=0;i<n;++i){
        cin >> x;
        A.push_back(x);
    }
    int MAXt= 0,r;
    for (int i = 0;i<n;++i){
        for (int j = n-1;j>i;--j){
            if (check(i,j) && j - i + 1>MAXt){
                MAXt = j- i + 1;
                r = j;
                break;
            }
        }
    }
    if (MAXt!=0) cout << "Day Max tu " << r+2-MAXt << " den " << r+1;
    else cout << "Khong co day Max nao";
    return 0;
}