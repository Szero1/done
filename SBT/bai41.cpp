#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,s;
    cin >> h >> m >> s;
    if (h < 18 && h > 6) cout << "Trang thai tat";
    else{
        int temp ;
        if (h < 24&&h>18) temp = (h-18)*3600+m*60 + s;
        if (h <= 6 && h >= 0) temp = h* 3600 + m*60 + s + 6 * 3600;
        temp = temp % 25;
        if (temp <= 10) cout << "Trang thai bat";
        else cout << "trang thai tat"; 
    }
    return 0;
}