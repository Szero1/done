#include <iomanip>
#include <iostream>
using namespace std;

void input(int &N){
    cout << "\tNhap so m khoi nuoc sach da dung: ";
    cin >> N;
    if ((N <0) || (N >1000)){
        system("cls");
        cout << "\t\tNhap lai !!!";
        input(N);
    }
}

void solve(int N){
    cout << fixed;
    cout << setprecision(2);
    if (N <= 5){
        cout << "\tSo tien ung vs gia ban cty: " << (N*6500)*1.0 << " dong";
        cout << "\n\tSo tien ung vs thue VAT: " << (N*6500)*0.12 << " dong";
        cout << "\n\tSo tien phai tra: " << (N*6500)*1.12 << " dong";
    }else if (N <= 15)
    {
        cout << "\tSo tien ung vs gia ban cty: " << (5*6500  + (N - 5)*7800)*1.0 << " dong";
        cout << "\n\tSo tien ung vs thue VAT: " << (5*6500  + (N - 5)*7800)*0.12 << " dong";
        cout << "\n\tSo tien phai tra: " << (5*6500  + (N - 5)*7800)*1.12 << " dong";
    }else if (N <= 25)
    {
        cout << "\tSo tien ung vs gia ban cty: " << (5*6500 + 10*7800 + (N - 15)*9200)*1.0<< " dong";
        cout << "\n\tSo tien ung vs thue VAT: " << (5*6500 + 10*7800 + (N - 15)*9200)*0.12 << " dong";
        cout << "\n\tSo tien phai tra: " << (5*6500 + 10*7800 + (N - 15)*9200)*1.12 << " dong";
    }else
    {
        cout << "\tSo tien ung vs gia ban cty: " << (5*6500 +10*7800 *10*9200 + (N-25)*10300)*1.0 << " dong";
        cout << "\n\tSo tien ung vs thue VAT: " << (5*6500 +10*7800 *10*9200 + (N-25)*10300)*0.12 << " dong";
        cout << "\n\tSo tien phai tra: " << (5*6500 +10*7800 *10*9200 + (N-25)*10300)*1.12 << " dong";
    }
}

int main(){

    int N;
    input(N);
    solve(N);
    cout << endl << "\t";
    system("pause");
    return 0;
}