// permasalahan: membalik string

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    cout << endl;
    // === METODE 1 === //
    cout << "Menggunakan for loop: \n";
    int size = str.length(); // menyimpan panjang string;
    // mencetak string secara terbalik
    for (int i = size - 1; i >= 0; i--)
        cout << str[i];
    cout << endl << endl;

    // === METODE 2 === //
    cout << "Menggunakan fungsi reverse: \n";
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}