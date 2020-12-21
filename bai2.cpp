#include <iostream>
#include<math.h>
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
    if ((dodai(a,b) == Rmi) || (dodai(a,b) == Rma)) cout << "\tHai duong tron tiep xuc nhau.";
    else if ((dodai(a,b) > Rmi ) && (dodai(a,b) < Rma)) cout << "\tHai duong tron cat nhau";
    else cout << "\tHai duong tron khong giao nhau";
}

int main(){
    ht C1,C2;
    solve(C1,C2);
    cout << endl << "\t";
    system("pause");
    return 0;
}