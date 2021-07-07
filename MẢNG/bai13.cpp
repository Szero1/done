#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int temp = 0,res = 0,v = INT32_MIN,lt = 0, r = 0,l = 0,ix = 0;
    for(int x,i = 0;i<n;++i){
        cin >> x;
        if (x > v){
            v = x;
            ix = i;
        }
        temp += x;
        if (temp < 0){
            temp = 0;
            lt = i;
        }else if (temp > res){
            res = temp;
            r = i;
            l = lt;
        }
    }
    if (res == 0){
        cout << "Day con co tong lon nhat " << ix+1 << "-" << ix+1 << "\nTong=";
        cout << v;
    }
    else {
        cout << "Day con co tong lon nhat " << l+1 << "-" << r+1 << "\nTong=";
        cout << res;
    }
    return 0;
}