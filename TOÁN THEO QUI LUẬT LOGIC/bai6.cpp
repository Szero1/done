#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b){
    string Sa = to_string(a);
    string Sb = to_string(b);

    for (int i = 0;i < Sa.size()/2;++i)
        if (Sa[i] != Sa[Sa.size()-1-i]) return false;
    for (int i = 0;i < Sb.size()/2;++i)
        if (Sb[i] != Sb[Sb.size()-1-i]) return false;
    return true;
}

int main(){
    for (int i = 101;i <47000;++i)
        if (check(i,i*i)) cout << i << "    " << i*i<<"\n";
    return 0;
}