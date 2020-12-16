#include <iostream>

using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){
    int a = 5;
    cout << "address a " << &a << endl;
    cout << " nilai a " << a << endl;
    //lempar address
    fungsi(a);
    kuadrat(a);
    cout << "Hasil kuadrat : " << a << endl;
    return 0;
}

void fungsi(int &b){
    b = 10;
    cout << "address b " << &b << endl;
    cout << "nilai b " << b <<endl;
}

void kuadrat(int &reference){
    reference = reference * reference;
}