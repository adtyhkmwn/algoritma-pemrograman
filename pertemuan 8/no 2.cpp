#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi variabel
    float harga_barang;
    int jumlah_barang;
    float total_beli, jumlah_diskon, total_bayar, diskon;

    // Input dari pengguna
    cout << "Masukkan harga barang: ";
    cin >> harga_barang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    // Menghitung total beli
    total_beli = harga_barang * jumlah_barang;

    // Menentukan diskon berdasarkan jumlah barang
    if (jumlah_barang > 100) {
        diskon = 0.15; // 15% diskon
    } else {
        diskon = 0.05; // 5% diskon
    }

    // Menghitung jumlah diskon
    jumlah_diskon = total_beli * diskon;

    // Menghitung total bayar setelah diskon
    total_bayar = total_beli - jumlah_diskon;

    // Menampilkan hasil
    cout << fixed << setprecision(2);
    cout << "\nTotal beli: " << total_beli << endl;
    cout << "Jumlah diskon: " << jumlah_diskon << endl;
    cout << "Total bayar: " << total_bayar << endl;

    return 0;
}