#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;

class ht{
    public:
    float x,y,R;
    ht(){
        cout << "\tNhap Duong tron tam I(x;y) va Ban kinh R";
        cout << "\n\tR = ";
        cin >> R;
        if (R <= 0){
            system("cls");
            cout << "\tNhap lai !!! \n";
            ht();
        }
        cout << "\tx = ";
        cin >> x;
        cout <<"\ty = ";
        cin >> y;
    }
};

float dodai(float a, float b){
    return sqrt(a*a + b*b);
}

void solve(ht C1,ht C2){
    float a,b,Rma,Rmi;
    a = C1.x - C2.x;
    b = C1.y - C2.y;
    Rma = C1.R + C2.R;
    Rmi = abs(C1.R - C2.R);
    cout << fixed;
    cout << setprecision(3);
    if ((dodai(a,b) == Rmi) || (dodai(a,b) == Rma) || ((dodai(a,b) > Rmi ) && (dodai(a,b) < Rma))) cout << "\tKhoang cach ngan nhat giua 2 duong tron la: 0.000";
    else{
        if ((dodai(a,b) > Rma)) cout << "\tKhoang cach ngan nhat giua 2 duong tron la: " << (dodai(a,b) - Rma);
        else cout << "\tKhoang cach ngan nhat giua 2 duong tron la: " << (-dodai(a,b) + Rmi);
    }
}

int main(){
    ht C1,C2;
    solve(C1,C2);
    cout << endl << "\t";
    system("pause");
    return 0;
}