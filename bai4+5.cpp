#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


float dodai(float a,float b){
    return sqrt(a*a + b*b);
}
struct Diem{
        float x,y;
};
struct dt{
    float a,b,c;
};

class tamgiac{
        Diem A,B,C;
        dt d1,d2;
        float a,b,c,p,R,S;
    public:
        tamgiac()
        {
            cout << "\tNhap toa do diem A(x;y)";
            cout << "\n\tx = ";
            cin >> A.x;
            cout << "\ty = ";
            cin >> A.y;

            cout << "\tNhap toa do diem B(x;y)";
            cout << "\n\tx = ";
            cin >> B.x;
            cout << "\ty = ";
            cin >> B.y;

            cout << "\tNhap toa do diem C(x;y)";
            cout << "\n\tx = ";
            cin >> C.x;
            cout << "\ty = ";
            cin >> C.y;

            a = dodai(C.x-B.x,C.y - B.y);
            b = dodai(C.x - A.x,C.y - A.y);
            c = dodai(A.x - B.x, A.y - B.y);

            if ((a+b<=c) || (a+c<=b)|| (b+c<=a)){
                system("cls");
                cout << "\tNhap lai !!!\n";
                tamgiac();
            }
            p = (a+b+c) / 2;
            S = sqrt(p*(p-a)*(p-b)*(p-c));
            R = (a*b*c)/(4*S);
        }

        void Show(){
            cout << "\tchu vi tam giac la " << p*2;
            cout << "\n\tDien tich tam giac la: " << S;
            cout << "\n\tBan kinh duong tron ngoai tiep tam giac la: R = "<< fixed << setprecision(3) <<R;
        }
};

int main(){
    tamgiac ABC;
    ABC.Show();
    cout << endl << "\t";
    system("pause");
    return 0;
}