#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin.ignore();
    getline(cin,s);
    int count = 0,temp = 0;
    for (auto &item:s){
        if (item =='e') ++count;
        temp = max(temp,count);
        if (item != 'e') count = 0;
    }
    cout << temp << "\n";
    for (;temp>0;--temp) cout << 'e';
    return 0;
}