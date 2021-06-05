#include<bits/stdc++.h>
using namespace std;
const int a[] = {2,3,5,7};
const int b[] = {1,3,7,9};
vector<int> snt;

bool is_prime(int n){
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <=n;i+= 6) if (n % i == 0|| n %(i+2) == 0) return false;
    return true;
}

void add_number(int n,int s){
    if (int(log10(s)) + 1 == n) snt.push_back(s);
    else for(auto item:b){
        int temp = s*10+item;
        if (is_prime(temp)) add_number(n,temp);
    }
}
 
int main(){
    int n;
    cin >> n;
    for (auto item:a) add_number(n,item);
    cout << snt.size() << "\n";
    for (auto &item:snt) cout << item << " "; 
    return 0;
}
