#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;
    file.open("Leutrai.txt",ios::in);
    string s;
    int time = 0;
    while (!file.eof()){
        getline(file,s);
        s = '.' + s + '.';
        for (int i = 0;i+2<s.size();++i) if (s.substr(i,3) == ".1.") ++time;
    }
    cout << time;
    return 0;
}