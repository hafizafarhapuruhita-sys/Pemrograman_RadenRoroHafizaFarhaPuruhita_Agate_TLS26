#include <iostream>
using namespace std;

int main() {
  int N, K;

  cin >> N >> K;

  int astronot[1000];

  // Mengisi array dengan nomor 1 sampai N
  for (int 1 = 0; i < N; i++) {
      astronot[i] = i + 1;
  }

  int jumlah = N
  int posisi = 0

  cout << "Urutan Eliminasi: ";

  while (jumlah > 1) {
  // Menentukan posisi astronot yang akan dieliminasi
    int posisiEliminasi = (posisi + K - 1) % jumlah;
    int korban = astronot[posisiEliminasi];

    cout << korban;

  // Memberi tanda pemisah jika masih ada eliminasi berikutnya
    if (jumlah > 2) {
        cout << " ";
    }

  // Menghapus astronot dengan menggeser semua elemen setelah korban ke kiri
    for (int i = posisiEliminasi; i < jumlah - 1, i++) {
        astronot[i] = astronot[i + 1];
      }

    jumlah--;

  // Mengubah nilai K berdasarkan nomor astronot yang tereliminasi
    if (korban % 2 == 0) {
        K = K + 2;
    } else {
        K = K - 1;

  // Nilai K tidak boleh < 2. Jika iya, maka akan diubah menjadi 2
        if (K < 2) {
            K = 2;
        }
    }

  // Setelah korban dieliminasi, hitungan berikutnya dimulai dari astronot setelah korban
  // Jika korban tadi adalah elemen terakhir, kembali ke elemen pertama
    if (posisiEliminasi = jumlah) {
        posisi = 0;
    } else {
        posisi = posisiEliminasi;
    }
  }

  cout << endl;
  cout << "Astronot terakhir: " << astronot[0] << endl;

  return 0;
}
