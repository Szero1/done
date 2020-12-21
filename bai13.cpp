#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct dt {
    float a,b,c;
};

void input(dt &d1,dt &d2){
    cout << "\tNhap duong thang d1: ax + by = c";
    cout << "\n\ta = ";
    cin >> d1.a;
    cout << "\tb = ";
    cin >> d1.b;
    cout << "\tc = ";
    cin >> d1.c;
    cout << "\tNhap duong thang 2: a'x + b'y = c'";
    cout << "\n\ta' = ";
    cin >> d2.a;
    cout << "\tb' = ";
    cin >> d2.b;
    cout << "\tc' = ";
    cin >> d2.c;
    if ((d1.a*d1.a + d1.b*d1.b == 0) || (d2.a*d2.a + d2.b * d2.b == 0)){
        system("cls");
        cout << "\tNhap lai!!!\n";
        input(d1,d2);
    }
}

void solve(dt d1, dt d2){
    float D,Dx,Dy;
    cout << fixed;
    cout << setprecision(3);
    D = d1.a * d2.b - d2.a * d1.b;
    Dx = d1.c * d2.b - d2.c * d1.b;
    Dy = d1.a * d2.c - d2.a * d1.c;
    if (D != 0) cout << "\tGiao diem cua 2 duong thang la diem (" << (Dx / D) << ";" << (Dy / D) << ").";
    else if ((D == 0) && (Dx == 0) && (Dy == 0)) cout << "\tHai duong thang trung nhau.";
    else cout << "\tHai duong thang song song.";
    
}

int main(){

    dt d1,d2;
    input(d1,d2);
    solve(d1,d2);

    cout << endl << "\t";
    system("pause");
    return 0;
}
