#include<iostream>
#include<array>

using namespace std;
int main()
{
    //membuat array dengan standard library
    //array<int, jumlah> namaArray
    array<int, 5> nilai;
    
    for(int i = 0 ; i < 5 ; i++){
        nilai[i] = i;
        cout << "nilai : [" << i << "] = " << nilai[i] ;
        cout << " address : " << &nilai[i] << endl;
    }
    cout << endl;
    //ukuran array
    cout << nilai.size() <<endl;
    //address awal
    cout << "address awal : "<< nilai.begin() << endl;
    //address akhir
    cout << "address akhir : "<< nilai.end() << endl; 
    //cari
    cout << "Nilai di-2 : " << nilai.at(2) << endl;

    cin.get();
    return 0;
}
