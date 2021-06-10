#include <bits/stdc++.h>
using namespace std;

int convert10(const int &a,const string &b){
    int temp = 0;
    if (a == 10) return stoi(b);
    for (int i = 0;i<b.size();++i) if (b[i] >= 'A' && b[i] <= 'F') temp  += (b[i] - 55) * pow(a,b.size()-i-1);
    else temp += (b[i] - '0')* pow(a,b.size()-i-1);
    return temp;
}

string convert(const int &a,const string &b,const int &c){
    if (a == c) return b;
    string temp = "";
    for (int i = convert10(a,b);i!=0;i/=c){
        if ((i%c>=10)&&(i%c<=15)) temp = char(i % c + 55) + temp;
        else temp = char(i % c + '0') + temp;
    }
    return temp;
}

int main()
{   
    int a,c;
    string b;
    cin >> a >> b >> c;
    cout << b << "[cs" << a << "]=" << convert(a,b,c) << "[cs" << c << "]";
    return 0;
}