#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "\t\tGAME";
    cout << "\n\t1. Mat sap";
    cout << "\n\t2. Mat ngua";
    cout << "\n\tAn: ";
    cin >> a;
    cout << "\tBinh: ";
    cin >> b;
    cout << "\tCuong: ";
    cin >> c;
    if ((a < 1)|| (a > 2) || (b < 1) || (b > 2) || (c < 1) || (c > 2))
    {
        system("cls");
        cout << "\tNhap Lai!!!\n";
        main();
    }
    if ((a == b)&& (b == c)) cout << "\t\tHoa";
    else if ((a == b) && (c != a)) cout << "\t\tCuong WIN";
    else if ((b == c) && (a != b)) cout << "\t\tAn WIN";
    else if ((c == a) && (b !=c)) cout << "\t\tBinh WIN";
    cout << endl << "\t";
    system("pause");
    return 0;
}