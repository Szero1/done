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
        float a,b,c,p,x,y,R;
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
        }

        void Trongtam(){
            d1.a = 2*(B.x - A.x);
            d1.b = 2*(B.y - A.y);
            d1.c = B.x * B.x + B.y*B.y - A.x*A.x - A.y*A.y;

            d2.a = 2*(C.x - A.x);
            d2.b = 2*(C.y - A.y);
            d2.c = C.x * C.x + C.y*C.y - A.x*A.x - A.y*A.y;

            float D,Dx,Dy;

            D = d1.a * d2.b - d2.a * d1.b;
            Dx = d1.c * d2.b - d2.c * d1.b;
            Dy = d1.a * d2.c - d2.a * d1.c;
            x =Dx/D;
            y = Dy/D;
            cout << "\n\tTrong tam tam giac la: I = (" << x << ";" << y << ").";
            R = dodai(A.x - x,A.y - y);
            cout << "\n\tDo dai ban kinh duong tron ngoai tiep tam giac la: R = " << fixed << setprecision(3) <<R;
        }

        void Show(){
            cout << "\tchu vi tam giac la " << p*2;
            float S = sqrt(p*(p-a)*(p-b)*(p-c));
            cout << "\n\tDien tich tam giac la: " << S;
            Trongtam();
        }
};

int main(){
    tamgiac ABC;
    ABC.Show();
    cout << endl << "\t";
    system("pause");
    return 0;
}