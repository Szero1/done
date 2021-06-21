#include <bits/stdc++.h>
using namespace std;

const string number[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};

int main()
{
    string n;
    cin >> n;
    while (n.front() == '0' && n.size() > 1) n.erase(n.begin());
    if (n.size() == 1){
        cout << ( n == "0"?"khong":number[n[0] - '0']);
    }else if (n.size() == 2){
        if (n[0] == '1') cout << "muoi ";
        else cout << number[n[0] - '0'] << " muoi ";
        cout << (n[1] == '5' ? "lam":number[n[1] - '0']);
    }else{
        cout << number[n[0] - '0'] << " tram ";
        if (n[1] == '1') cout << "muoi ";
        else if (n[1] == '0' && n[2] != '0') cout << "linh "; 
        else if (n[1] != '0') cout << number[n[1] - '0'] << " muoi ";
        cout << (n[2] == '5' && n[1] > '0' ? "lam":number[n[2] - '0']);
    }
    return 0;
}