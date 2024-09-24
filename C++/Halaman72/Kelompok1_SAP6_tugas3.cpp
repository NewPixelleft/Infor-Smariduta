// translate bilangan 1 - 100 jadi kata
// misalkan
// 89 -> delapan puluh sembilan
// 100: seratus

#include <iostream>
#include <string>
using namespace std;

string bil[]= {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

int main(){
    int n; cin >> n;
    string terjemahan;

    if (n < 10)
        terjemahan = bil[n];
    else if (n == 10)
        terjemahan = "sepuluh";
    else if (n < 20){
        terjemahan += bil[n % 10];
        terjemahan += " belas";
    }
    else if (n < 100){
        terjemahan += bil[n / 10];
        terjemahan += " puluh ";
        terjemahan += bil[n % 10];
    } 
    else
        terjemahan = "seratus";
    cout << terjemahan;
}