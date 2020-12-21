#include <iostream>
#include <iomanip>
using namespace std;

void input(int &x,int &y,int &a){
    cout << "\tNhap chi so dien ke thang nay: ";
    cin >> x;
    cout << "\tNhap chi so dien ke thang truoc: ";
    cin >> y;
    if ((x < 0) && (y < 0)){
        system("cls");
        cout << "\t\tNhap lai!!!1";
        input(x,y,a);
    }
    a = abs(x - y);
}

void solve(int a){
    cout << fixed;
    cout << setprecision(0);
    if (a <= 60) cout << "\tso tien la: " << a  << "*1000 ="<< a * 1000;
    else if (a <=120) cout << "\tSo tien la: 60*1000 + "<< a - 60 << "*1200 = "<< 60*1000 + (a - 60) * 1200;
    else if (a <= 300) cout << "\tSo tien la: 60*1000 + 60*1200 + "<< a - 120 << "*2000 = " << 60*1000 + 60*1200 + (a - 120)*2000;
    else cout << "\tSo tien la: 60*1000 + 60*1200 + 180*2000 + "<< a - 300 << "*4000 = " << 60*1000 + 60*1200 + 180*2000 + (a - 300)*4000;
}

int main (){
    int x,y,a;
    input(x,y,a);
    solve(a);
    cout << endl << "\t";
    system("pause");
    return 0;
}