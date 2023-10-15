#include <stdio.h>

int main() {

    //1
    int jumlah_kaos, jumlah_kemeja_batik, jumlah_celana_training;
    double harga_kaos = 100000, harga_kemeja_batik = 150000, harga_celana_training = 175000;
    double diskon, total_harga;

    printf("Masukkan jumlah kaos: ");
    scanf("%d", &jumlah_kaos);
    printf("Masukkan jumlah kemeja batik: ");
    scanf("%d", &jumlah_kemeja_batik);
    printf("Masukkan jumlah celana training: ");
    scanf("%d", &jumlah_celana_training);

    int jumlah_total = jumlah_kaos + jumlah_kemeja_batik + jumlah_celana_training;

    if (jumlah_total >= 5) {
        diskon = 0.35;
    } else if (jumlah_total >= 3) {
        diskon = 0.2;
    } else if (jumlah_total >= 2) {
        diskon = 0.15;
    } else {
        diskon = 0;
    }

    total_harga = (jumlah_kaos * harga_kaos + jumlah_kemeja_batik * harga_kemeja_batik + jumlah_celana_training * harga_celana_training) * (1 - diskon);

    printf("Total harga sebelum diskon: Rp %.2f\n", jumlah_kaos * harga_kaos + jumlah_kemeja_batik * harga_kemeja_batik + jumlah_celana_training * harga_celana_training);
    printf("Diskon: %.2f%%\n", diskon * 100);
    printf("Total harga setelah diskon: Rp %.2f\n", total_harga);


    //2
    int n, jumlah_ganjil = 0, jumlah_genap = 0;

    printf("Masukkan N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        jumlah_ganjil += i;
    }

    for (int i = 2; i <= n; i += 2) {
        jumlah_genap += i;
    }

    printf("Jumlah bilangan ganjil: %d\n", jumlah_ganjil);
    printf("Jumlah bilangan genap: %d\n", jumlah_genap);


    //3
//    int n, bil;
//
//    printf("Masukkan N: ");
//    scanf("%d", &n);
//
//    bil = 1;
//
//    for (int i = 1; i <= n; i++) {
//
//        printf("%d ", bil);
//
//        if (i % 3 == 0) {
//            bil += 3;
//        } else if (i % 2 == 0) {
//            bil += 2;
//        } else {
//            bil += 1;
//        }
//    }
//
//    printf("\n");
    return 0;
}
