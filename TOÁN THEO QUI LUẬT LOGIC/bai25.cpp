#include <bits/stdc++.h>
using namespace std;
int main(){
    string A,B = "";
    vector<string> S;
    cin.clear();
    getline(cin,A);
    for (int i = 0;i < A.size();++i){
        if (A[i] != ' ' && A[i] != '.' && A[i] != ',') B+= A[i];
        else{
            if (B != "") S.push_back(B);
            B = "";
        }
    }
    S.push_back(B);
    cout << S.size();
    return 0;
}