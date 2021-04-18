#include <bits/stdc++.h>
using namespace std;

float Fx(float x){
    return 5*x*x*x*x + 6*x*x*x - 4*x*x + 3*x - 8;
}


float d(float h,int n,float a,float b){
    float tempMax = -INFINITY;
    float tempMin = INFINITY;
    for (int i = 0;i<= n;++i){
        tempMax = max(tempMax,Fx(a + i * h));
        tempMin = min(tempMin,Fx(a+i*h));   
    }
    return tempMax - tempMin;
}

int main(){
    int n;
    float a,b;
    cin >> n >> a >> b;
    float h = (b-a)/n;
    cout << fixed <<setprecision(4) << d(h,n,a,b);
    return 0;
}