#include <bits/stdc++.h>
using namespace std;
int main(){
    float y,x;
    int k,n;
    cin >> y >> k >> n;
    x = y*2/(sqrt(5)-1);
    for (int i = k;i<=n;++i){
        x = y;
        y = (sqrt(5) -1)*x/2;
    }
    cout << "kich thuoc la co be nhat\nChieu rong: " <<y << "\nChieu dai: " << x;
    for (int i = n;i>=1;--i){
        y = x;
        x = y*2/(sqrt(5)-1);
    }
    cout << "\nkich thuoc la co to nhat\nChieu rong: " <<y << "\nChieu dai: " << x;
    return 0;
}