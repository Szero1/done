#include <iostream>
using namespace std;
#include <math.h>

struct ht{
    float x,y,R;
};

struct Diem{
    float x,y;
};

void inputht(ht &C){
    cout << "\tNhap Duong tron tam I(x;y) va Ban kinh R";
    cout << "\n\tR = ";
    cin >> C.R;
    if (C.R <= 0){
        system("cls");
        cout << "\tNhap lai !!! \n";
        inputht(C);
    }
    cout << "\tx = ";
    cin >> C.x;
    cout <<"\ty = ";
    cin >> C.y;
}

void inputDiem(Diem &A){
    cout << "\tNhap toa do diem A(x;y).";
    cout << "\n\tx = ";
    cin >> A.x;
    cout << "\ty = ";
    cin >> A.y;
}

void input(ht &C, Diem &A){
    inputht(C);
    inputDiem(A);
}

void solve(ht C, Diem A){
    float a,b;
    a = A.x - C.x;
    b = A.y - C.y;
    if (pow(a,2) + pow(b,2) == pow(C.R,2)) cout << "\tDiem A("<< A.x << ";" << A.y << ") thuoc duong tron tam I(" << C.x << ";"<< C.y << ") ban kinh R = " << C.R;
    else cout << "\tDiem A("<< A.x << ";" << A.y << ") khong thuoc duong tron tam I(" << C.x << ";"<< C.y << ") ban kinh R = " << C.R;
}

int main(){
    ht C;
    Diem A;

    input(C,A);
    solve(C,A);


    cout << endl << "\t";
    system("pause");
    return 0;
}