// mencari apakah suatu string palindrom

#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str){ // fungsi untuk mengecek apakah string merupakan palindrom
    int size = str.length() - 1;
    int kiri = 0; int kanan = size;

    while (kiri < kanan){
        towlower(str[kanan]);
        towlower(str[kiri]);
        if (str[kiri] == str[kanan]) 
            kiri++, kanan--; // kalau masih sama, lanjutkan prosesnya, indeks kiri bertambah sementara kanan berkurang.
        else
            return false; // karena terdeteksi string indeks kanan dan kiri beda, jadi bukan palindrom
    }

    return true;
}

int main(){
    string kalimat;   
    getline(cin, kalimat);

    if (palindrome(kalimat))
        cout << '"' << kalimat << '"' << " adalah palindrom";
    else
        cout << '"' << kalimat << '"' << " bukanlah palindrom";
}