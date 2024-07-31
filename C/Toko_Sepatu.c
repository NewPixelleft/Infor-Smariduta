#include <stdio.h>
#include <stdbool.h>

int main(){
    bool luar_kota;
    int jumlah;
    
    printf("Apakah ke luar atau di dalam kota? (1 luar / 0 dalam): ");
    scanf("%d", &luar_kota);

    printf("Masukkan jumlah sepatu yang dipesan: ");
    scanf("%d", &jumlah);

    int hasil = 0;
    int ongkir = 0;

    if (jumlah == 1)
        hasil += 100000;
    else if (jumlah <= 3)
        hasil += jumlah * 95000;
    else
        hasil += jumlah * 90000;
    
    if (luar_kota){
        if (jumlah > 3)
            ongkir += jumlah * 9000;
        else
            ongkir += jumlah * 10000;
    }

    printf ("harga barang   : Rp%d\n", hasil);
    printf ("ongkir         : Rp%d\n", ongkir);
    printf ("harga total    : Rp%d\n", (ongkir + hasil));
}
