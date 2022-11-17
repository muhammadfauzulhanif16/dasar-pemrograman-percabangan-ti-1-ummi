#include <iostream>
using namespace std;

int main() {
  // tugas 1
  int total_belanja;

  cout << "Masukkan total pembelanjaan : Rp ";
  cin >> total_belanja;

  if (total_belanja > 500000) {
    cout << "Selamat! Anda mendapatkan kopun belanja sebesar Rp 100.000";
  } else if (total_belanja > 250000) {
    cout << "Selamat! Anda mendapatkan kopun belanja sebesar Rp 50.000";
  } else {
    cout << "Maaf, total belanja Anda masih dibawah Rp 250.000";
  }

  //  tugas 2
  // soal 1
  int a = 3; // harus ditambahkan tipe data int karena nilainya berupa bilangan bulat & diakhiri titik koma pada pernyataan
  cout << a; // harus diakhiri titik koma pada pernyataan

  // soal 2
  /*
   * deklarasi variabel a dengan tipe data int
   * a = (2 + 5) * 3
   * cout << "Perhitungan (2 + 5) * 3 adalah 21 \n";
   * return 0
   */
  int a;
  a = (2 + 5) * 3;
  cout << "Perhitungan (2 + 5) * 3 adalah " << a << endl;


  // tugas 3
  float angka;
  cout << "Masukkan angka : "; // karena yang ditampilkan adalah kalimat, maka harus ditambahkan kutip 2 pada kalimat & diakhiri titik koma pada pernyataan
  cin >> angka; // ganti operator << menjadi >> untuk pengeluaran sesuai dengan input & diakhiri titik koma pada pernyataan
  cout << "Angka desimal yang Anda input :" << angka << endl; // tambahkan kutip 2 untuk penutup kalimat & ubah variabel a menjadi angka

  return 0;
}
