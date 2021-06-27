#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,temp;
    getline(cin,s);
    getline(cin,temp);
    s = s + ' ';
    map<string,int> A;
    for (int i = s.find(' ',0);i!=-1;i = s.find(' ',0)){
        if (s.front() == ' ') while(s.front() == ' ') s.erase(s.begin());
        else{
            ++A[s.substr(0,i)];
            s.erase(0,i+1);
        }
    }
    int count = 0;
    for (auto &item:A) count += item.second;
    cout << count << "\n" << A[temp]; 
    return 0;
}