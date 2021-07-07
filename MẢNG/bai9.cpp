#include <bits/stdc++.h>
using namespace std;
vector<float> A;

int main()
{
    int n;
    float x,d;
    cin >> n;
    for (int i = 0;i<n;++i){
        cin >>x;
        A.push_back(x);
    }
    cin >> d;
    int r,temp = 0,MAXt = 0;
    for (int i = 0;i<n;++i){
        if (A[i] > d) temp++;
        else temp = 0;
        if (temp > MAXt){
            r = i;
            MAXt = temp;
        }
    }
    if (MAXt!=0) cout << "Day Max tu " << r+2-MAXt << " den " << r+1;
    else cout << "Khong co so nao lon hon" << d;
    return 0;
}