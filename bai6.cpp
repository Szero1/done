#include <iostream>
#include <iomanip>
using namespace std;

struct sys{
    int n,h,k,x,y,z,a;
};

void input(sys &ss){
    cout << "\tNhap so voi nuoc: ";
    cin >> ss.n;
    cout << "\tNhap so gio hoat dong cua 1 voi: ";
    cin >> ss.h;
    cout << "\tNhap so khoi nuoc trong 1 h: ";
    cin >> ss.k;
    cout << "\tNhap gia nhung khoi nuoc tu 1 -> 99: ";
    cin >> ss.x;
    cout << "\tNhap gia nhung khoi nuoc tu 100 -> 200: ";
    cin >> ss\t.y;
    cout << "\tNhap gia nhung khoi nuoc tu >200: ";
    cin >> ss.z;
    if ((ss.x < 0) || (ss.y < 0) || (ss.z < 0) || (ss.n < 0) || (ss.h < 0) || (ss.k< 0)){
        system("cls");
        cout << "\t\tNhap lai!!!";
        input(ss);
    }
    ss.a = ss.n * ss.h * ss.k;
}

void solve(sys ss){
    cout << fixed;
    cout << setprecision(0);
    if (ss.a <= 99) cout << "\tSo tien la: " <<  ss.a * ss.x;
    else if(ss.a <= 200) cout << "\tSo tien la: " << 99*ss.x + (ss.a - 99)*ss.y;
    else cout << "\tSo tien la: " << 99*ss.x + 101*ss.y + (ss.a - 200)*ss.z;
}

int main(){
    sys ss;
    input(ss);
    solve(ss);
    cout << endl << "\t";
    system("pause");
    return 0;
}
