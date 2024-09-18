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

    // pemisahan kota;
    for (int i = 0; i < banyak_kota; i++){
        for (int j = i + 1; j < banyak_kota; j++){
            char awal = 'A' + i, akhir = 'A' + j;
            cout << "Jarak kota " << awal << " - " << akhir << ": " << list_kota [i][j] << endl;
        }
    }
}
// outputnya menjadi::::
// Masukkan banyak kota: 4   
// Masukkan jarak antar kota 
// 0 20 25 35
// 25 15 0 10
// 35 20 10 0
// 20 0 15 20
// Jarak kota A - B: 20
// Jarak kota A - C: 25
// Jarak kota A - D: 35
// Jarak kota B - C: 0 
// Jarak kota B - D: 10
// Jarak kota C - D: 0 