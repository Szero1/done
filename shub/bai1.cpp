#include<bits/stdc++.h>
using namespace std;

bool is_prime(int &n){
    if (n <= 3) return n > 1;
    else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <=n;i+= 6) if (n % i == 0|| n %(i+2) == 0) return false;
    return true;
}

int convert(int n){
    int temp = 0;
    for (;n/10 != 0;n/=10) temp = temp * 10 + n % 10;
    return temp*10+n;;
}
 
int main(){
    int a,b;
    cin >> a >> b;
    while (a <= b)
    {
        int temp = convert(a);
        if (is_prime(temp)) cout << a << endl;
        a++;
    }
    return 0;
}