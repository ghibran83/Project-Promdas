#include <stdio.h>

// Fungsi untuk konversi Dolar ke Rupiah
float dolarKeRupiah(float dolar, float kurs) {
    return dolar * kurs; // Mengalikan jumlah Dolar dengan nilai kurs
}

// Fungsi untuk konversi Rupiah ke Dolar
float rupiahKeDolar(float rupiah, float kurs) {
    return rupiah / kurs; // Membagi jumlah Rupiah dengan nilai kurs
}

int main() {
    int pilihan;        // Variabel untuk menyimpan pilihan menu
    float nilai, hasil; // Variabel untuk menyimpan input nilai dan hasil konversi
    float kurs = 16510; // Kurs tetap, 1 USD = 16510 IDR
    char ulang;         // Variabel untuk menyimpan pilihan ulang (y/n)

    // Perulangan untuk menjalankan program terus-menerus sampai user memilih keluar
    do {
        // Menampilkan menu
        printf("=== Program Konversi Mata Uang ===\n");
        printf("1. Dolar ke Rupiah\n");
        printf("2. Rupiah ke Dolar\n");
        printf("Pilih opsi (1/2) : ");
        scanf("%d", &pilihan); // Membaca input menu

        // Mengecek pilihan user
        if (pilihan == 1) {
            // Jika user pilih 1
            printf("Masukkan jumlah Dolar: ");
            scanf("%f", &nilai); // Membaca input nilai
            hasil = dolarKeRupiah(nilai, kurs); // Memanggil fungsi konversi
            printf("%.2f Dolar = %.2f Rupiah\n", nilai, hasil); // Menampilkan hasil
        } 
        else if (pilihan == 2) {
            // Jika user pilih 2
            printf("Masukkan jumlah Rupiah: ");
            scanf("%f", &nilai); // Membaca input nilai
            hasil = rupiahKeDolar(nilai, kurs); // Memanggil fungsi konversi
            printf("%.2f Rupiah = %.2f Dolar\n", nilai, hasil); // Menampilkan hasil
        } 
        else {
            // Jika user pilih selain 1 atau 2
            printf("Pilihan tidak valid!\n");
        }

        // Menanyakan apakah user ingin konversi lagi
        printf("Ingin konversi lagi? (y/n): ");
        scanf(" %c", &ulang); // Membaca input ulang, spasi sebelum %c penting untuk menangkap enter sebelumnya

    } while (ulang == 'y' || ulang == 'Y'); // Perulangan selama user pilih y/Y

    printf("Terima kasih telah menggunakan program ini.\n"); // Pesan penutup
    return 0;
}
