#include <iostream>

using namespace std;

void fungsi (int *b){
    cout << "address b " << b << endl;
    cout << " nilai b " << *b << endl;
}

void kuadrat (int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
    cout << "kuadrat dari si a " << *valPtr << endl;
}

int main(){
    int a = 5;
    cout << "address a " << &a << endl;
    cout << " nilai a " << a << endl;
    //lempar address
    fungsi(&a);
    kuadrat(&a);
    cin.get();
    return 0;
}