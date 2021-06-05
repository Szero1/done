#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
int UCLN(int a, int b){
    if (b == 0) return a;
    return UCLN(b,a % b);
}

long long int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}

int UC(){
    int temp = arr[0];
    for(const auto &item:arr) temp = UCLN(temp,item);
    return temp;
}

long long int BC(){
    long long int temp = arr[0];
    for(const auto &item:arr) temp = BCNN(temp,item);
    return temp;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i<n;++i){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout <<"UCLN = "<< UC()<< "\nBCNN = "<<BC();
    return 0;
}