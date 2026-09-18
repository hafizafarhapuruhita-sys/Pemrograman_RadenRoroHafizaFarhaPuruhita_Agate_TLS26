#include <iostream>
using namespace std;

int main() {
    char pesan[1000];
    char hasil[1000];
    cout << "Input pesan: ";
    cin.getline(pesan, 1000);

// Huruf pertama tidak berubah
    hasil[0] = pesan[0];
    int i = 1;
    while (pesan[i] != '\0') {

// Mengubah huruf sebelumnya menjadi nilai alfabet
        int nilaiSebelumnya = pesan[i - 1] - 'A' + 1;

// Menggeser huruf sekarang
        hasil[i] = pesan[i] + nilaiSebelumnya;

// Jika melewati Z, kembali dari A
        if (hasil[i] > 'Z') {
            hasil[i] = hasil[i] - 26;
        }
        i++;
    }

// Menambahkan penanda akhir string
    hasil[i] = '\0';
    cout << "Hasil Enkripsi: " << hasil << endl;
    return 0;
}
