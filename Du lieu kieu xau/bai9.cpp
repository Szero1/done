#include <bits/stdc++.h>
using namespace std;

string Sum(string a, string b){
    while (a.size()!=b.size()) a.insert(a.begin(),'0');
    string S = "";
    int temp = 0;
    for (int i = a.size()-1; i>=0; --i,temp/=10){
        temp += ((a[i] - '0') + (b[i] - '0'));
        S = to_string(temp % 10) + S;
    }
    if (temp!=0) S = to_string(temp) + S;
    return S;
}

int main()
{
    int n;
    cin >> n;
    vector<string> Fi(n+1);
    Fi[0] = "0";
    Fi[1] = "1";
    for (int i = 2;i<=n;++i) Fi[i] = Sum(Fi[i-2],Fi[i-1]);
    cout << Fi.back();
    return 0;
}