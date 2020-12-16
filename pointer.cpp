#include <iostream>

using namespace std;

int pangkat(int *ptr);

int main(){
    int a = 5;
    int pangkat;
    //pointer
    int *pointer_a = nullptr;
    pointer_a = &a;


    //int a mempunyai nilai dan address (alamat)
    cout << "nilai dari a: " << a << endl;
    cout << "alamat dari a : " << pointer_a << endl;
    cout << "Nilai dari pointer a : " << *pointer_a << endl;
    

    cin.get();
    return 0;
}
