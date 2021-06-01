#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<string> can = {"Giap","At","Binh","Dinh","Mau","Ki","Canh","Tan","Nham","Quy"};
    vector<string> chi = {"Ti","Sua","Dan","Mao","Thin","Ty","Ngo","Mui","Than","Dau","Tuat","Hoi"};

    Start:
        cin >> n;
        if (n <= 0) goto End;
        cout << can[(n+6)%10] << " " << chi[(n+8)%12] << "\n";
        goto Start;
    End:
    return 0;
}