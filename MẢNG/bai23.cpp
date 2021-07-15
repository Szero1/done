#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string,string> A,pair<string,string> B){
    if (A.second == B.second) return A.first < B.first;
    return A.second < B.second;
}

int main()
{
    //ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream InPUT;
    InPUT.open("Input.INP",ios::in);
    freopen("Output.OUT","w",stdout);
    
    int n;
    InPUT >> n;
    vector<pair<string,string>> f;
    string s;
    while (!InPUT.eof()){
        getline(InPUT,s);
        if (s.size() == 0) continue;
        while (s.front() == ' ') s.erase(s.begin());
        while (s.back() == ' ') s.erase(s.end() - 1);
        int t = s.size();
        int i = t - 1;
        while (s[i] != ' ') --i;
        f.push_back(make_pair(s.substr(0,i),s.substr(i,t)));
    }

    sort(f.begin(),f.end(),compare);
    for (auto &item:f) cout << item.first << item.second << "\n";

    return 0;
}