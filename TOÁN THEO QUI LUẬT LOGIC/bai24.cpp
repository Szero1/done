#include <bits/stdc++.h>
using namespace std;
int main(){
    string A,B = "";
    cin.clear();
    getline(cin,A);
    for (int a = A.find(' ',0);a != -1;a = A.find(' ',0)){
        if (A.front() == ' ') while (A.front() == ' ') A.erase(A.begin());
        else {
            B += A.substr(0,a+1);
            A.erase(0,a+1);
        }
    }
    B += A;
    while (B.back() == ' ') B.erase(--B.end());
    cout << B;
    return 0;
}