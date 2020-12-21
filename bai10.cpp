#include <iostream>
#include <iomanip>
using namespace std;

void input(int &N){
    cout << "\tNhap luong dien tieu thu trong 1 thang: ";
    cin >> N;
    if (N < 0){
        system("cls");
        cout << "\t\tNhap lai !!!\n";
        input(N);
    }
}

void solve(int N){
    cout << fixed;
    cout << setprecision(0);
    if (N <= 100 ) cout << "\tSo tien phai tra: " << (N * 550)*1.1 <<  " dong";
    else if (N <= 150) cout << "\tSo tien phai tra: " << (100*550 + (N-100)*1100) * 1.1<<  " dong";
    else if( N <= 200 ) cout << "\tSo tien phai tra: " << (100*550 + 50*1100 + (N - 150)*1470)*1.1<<  " dong";
    else cout << "\tSo tien phai tra: " << (100*550 + 50*1100 + 50*1470 + (N - 200)*1600)*1.1<<  " dong";
}

int main(){
    int N;
    input(N);
    solve(N);
    cout << endl << "\t";
    system("pause");
    return 0;
}