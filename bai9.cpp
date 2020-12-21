#include<iostream>
using namespace std;
#include <iomanip>

int main(){

    float a = 650000;
    cout << fixed;
    cout << setprecision(0);
    for (int i = 1;i<=5;i++){
        a = a * 1.045;
        cout << "\tDan so sau "<< i << " nam la: " << a << endl;
    }

    cout << endl << "\t";
    system("pause");
    return 0;
}