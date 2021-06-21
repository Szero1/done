#include <bits/stdc++.h>
using namespace std;

string mul(string a,string b){
    const int len_a = a.size();
    const int len_b = b.size();
    vector<vector<int>> A(len_b,vector<int>(len_b+len_a,0));
    for (int i = len_a-1;i>=0;--i){
        for (int j = len_b-1;j>=0;--j){
            A[len_b-j-1][i+j+1] = (a[i] - '0') * (b[j] - '0');
        }
    }
    string S = "";
    int temp = 0;
    for (int i = len_a + len_b - 1;i>= 0;--i,temp/=10){
        for (int j = 0;j < len_b;++j) temp += A[j][i];
        S = to_string(temp%10) + S;
    }
    if (temp!= 0) S = to_string(temp) + S;
    while(S.front() == '0') S.erase(S.begin());
    return S;
}

int main()
{
    int n;
    cin >> n;
    long long int a[21];
    a[0] = 1;
    for (int i = 1;i<=20;++i) a[i] = i*a[i-1];
    if (n<=20){
        cout << a[n];
        return 0;
    }
    vector<string> a_2(n-19);
    a_2[0] = to_string(a[20]);
    for (int i = 1;i<=n-20;++i){
        a_2[i] = mul(a_2[i-1],to_string(i+20));
    }
    cout << a_2[n-20];
    return 0;
}