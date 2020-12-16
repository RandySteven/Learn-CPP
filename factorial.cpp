#include <iostream>

using namespace std;

int factorial(int n);

int main(){
    int n, hasil;
    cout << "menghitung faktorial dari : ";
    cin >> n;
    hasil = factorial(n);
    cout << "nilai factorial adalah : " << hasil << endl;

    cin.get();
    return 0;
}

int factorial(int n){
    return n > 1 ? n * factorial(n-1) : n;
}
