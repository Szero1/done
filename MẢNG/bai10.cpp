#include <bits/stdc++.h>
using namespace std;
vector<float> A;

int main()
{
    int n;
    float x;
    cin >> n;
    for (int i = 0;i<n;++i){
        cin >>x;
        A.push_back(x);
    }

    int r,temp = 0,MAXt = 0;
    for (int i = 0;i<n-1;++i){
        if (A[i+1] > A[i]) temp++;
        else temp = 0;
        if (temp > MAXt){
            r = i;
            MAXt = temp;
        }
    }
    if (MAXt!=0) cout << "Day Max tu " << r+2-MAXt << " den " << r+2;
    else cout << 1;
    return 0;
}