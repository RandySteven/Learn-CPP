#include <iostream>

using namespace std;

int main(){
    //f(n) = f(n-1) + f(n-2)
    int n;
    int f_n;
    int f_n1;
    int f_n2;
    cout << "Program deret fibonacci \n";
    cout << "Masukkan nilai ke-n : ";
    cin >> n;
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n << endl;
    for(int i = 1 ; i < n ; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << endl;
    }
    cin.get();
    return 0;
}