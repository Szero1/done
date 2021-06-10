#include <bits/stdc++.h>
using namespace std;

void convert(string &s){
    if (s.size() % 4 != 0 || s == ""){
        string temp(4 - (s.size() % 4), '0');
        s = temp + s;
    }
}

string convert(const int &a,const int &b,bool cs2 = false){
    string temp = "";
    for (int i = a;i!=0;i/=b) if (i%b < 10) temp = char(i%b + '0') + temp;
    else temp = char(i%b + 55) + temp;
    if (cs2) convert(temp);
    return temp;
}

int main()
{
    string s,temp = "";
    cin >> s;
    convert(s);
    map<string,string> A;
    for (int i = 0;i<=15;++i) A.insert(pair<string,string>(convert(i,2,true),convert(i,16)));
    A["0000"] = "0";
    for (int i = 0;i+4<=s.size();i+=4) temp += A[s.substr(i,4)];
    cout << temp;
    return 0;
}