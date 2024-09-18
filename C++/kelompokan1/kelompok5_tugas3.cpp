#include <iostream>
#include <vector>
using namespace std;

int main(){
    int banyak_kota; 
    cout << "Masukkan banyak kota: "; cin >> banyak_kota;
    
    vector <vector <int>> list_kota(banyak_kota, vector <int> (banyak_kota));

    cout << "Masukkan jarak antar kota " << endl;
    for (int i = 0; i < banyak_kota; i++)
        for (int j = 0; j < banyak_kota; j++)
            cin >> list_kota[i][j];
    
    cout << "Masukka indeks tiga kota yang jaraknya di tempuh perjalanan: ";
    int wan, tu, tri;
    cin >> wan >> tu >> tri;

    cout << "hasil keluaran: ";
    cout << list_kota[wan][tu] + list_kota[tri][tu];
}