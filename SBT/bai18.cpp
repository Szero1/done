#include <iostream>
using namespace std;

int main(){
    int m,n,k;
    cin >> m>>n>>k;
    if(n-m == k - n){
        m *= 2;
        n *= 2;
        k *= 2;
    }else{
        m -= 1;
        n -= 1;
        k -= 1;
    }
    return 0;
}