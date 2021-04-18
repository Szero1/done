#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,w1,h1,x_1,y_1;
    int x2,y2,w2,h2,x_2,y_2;
    cin >> x1>>y1>>x_1>>y_1>>x2>>y2>>x_2>>y_2;
    w1 = abs(x1 - x_1);
    h1 = abs(y1 - y_1);
    w2 = abs(x2-x_2);
    h2 = abs(y2-y_2);
    if ((x1+w1 >= x2) && (x2 + w2>=x1) && (y1+h1>=y2) && (y2+h2 >= y1)) cout <<"Hai hinh chu nhat co diem chung";
    else cout << "Hai hinh chu nhat k co diem chung";
    return 0;
}