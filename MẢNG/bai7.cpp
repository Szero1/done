#include <bits/stdc++.h>
using namespace std;
string A;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    for (int i = 0;i<n;++i){
        char x;
        cin >> x;
        A.push_back(x);
    }
    int t = 0;
    for (int i = 0,c = n-1;i<=c;++i,c = n - 1){
        if (A[i] == 'X') while (A[i] == 'X') ++i;
        if (A[i] == 'V'){
            while (A[c] == 'V') --c;
            if (i >= c) break;
            char temp = A[c];
            A[c] = A[i];
            A[i] = temp;
            ++t;
            for (char &item:A) cout << item << " ";
        }
        if (A[i] == 'D'){
            while (A[c] == 'V') --c;
            while (A[c] == 'D') --c;
            if (i >= c) break;
            char temp = A[c];
            A[c] = A[i];
            A[i] = temp;
            ++t;
            for (char &item:A) cout << item << " ";
        }
    }
    if (t == 0) for (char &item:A) cout << item << " ";
    cout << "\n" << t;
    return 0;
}