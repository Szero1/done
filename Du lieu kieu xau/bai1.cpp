#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    map<char,int> A;
    for (const char &item:s) if ((item >= 'a' && item <= 'z') || (item >= 'A' && item <= 'Z')) ++A[item];
    for (const auto &item:A) cout << item.first << ":" << item.second << " ";
    return 0;
}