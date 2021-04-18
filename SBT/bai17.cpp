#include <iostream>
#include <math.h>
using namespace std;

float dodai(float &a,float &b,float &c,float &d){
    return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}

int main(){
    float a1,b1,a2,b2,a3,b3,a4,b4;
    cin >> a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
    cout << dodai(a1,b1,a3,b3) << " "<< dodai(a2,b2,a4,b4);
    return 0;
}