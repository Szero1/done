#include <iostream>
#include <iomanip>
using namespace std;
#include <math.h>


void input(int &N){
    cout << "\tNhap so tien mua 1 thiet bi: ";
    cin >> N;
    if ((N <0) || (N > pow(10,9))){
        system("cls");
        cout << "\t\tNhap lai !!!\n";
        input(N);
    }
}

void solve(int N){
    cout << fixed;
    cout << setprecision(2);
    cout << "\tGia Goc\t\t"<<"Gia VAT";
    cout << "\n\t"<< float(N) * 10 / 11 << "\t\t"<< float(N) * 1/11;
}

int main(){
    int N;
    input(N);
    solve(N);
    cout << endl << "\t";
    system("pause");
    return 0;
}