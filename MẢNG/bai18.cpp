#include <bits/stdc++.h>
using namespace std;
int temp = 0;
vector<string> f;

bool compare(string a,string b){
    return ((a + b) >= (b + a));
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream sIN,sOUT;
    sIN.open("NUMCON.INP",ios::in);
    sOUT.open("NUMCON.OUT",ios::out);
    
    while (!sIN.eof()){
        string n;
        sIN >> n;
        temp = max(temp,int(n.size()));
        f.push_back(n);
    }
    sIN.close();
    sort(f.begin(),f.end(),compare);
    for (string &item:f) sOUT << item;
    sOUT.close();
    return 0;
}