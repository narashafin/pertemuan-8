#include <iostream>
#include <string>

using namespace std;

struct Zodiak { //struktur untuk nyimpen
  int tanggalAwal;
  int bulanAwal;
  int tanggalAkhir;
  int bulanAkhir;
  string nama;

};

int main() {
  Zodiak zodiak[12] = { //array zodiak
    {22, 12, 19, 1 , "CAPRICORN"},
    {20, 1, 18, 2 , "AQUARIUS"},
    {19, 2, 20, 3 ,"PISCES"},
    {21, 3, 19, 4 ,"ARIES"},
    {20, 4, 20, 5 ,"TAURUS"},
    {21, 5, 20, 6 ,"GEMINI"},
    {21, 6, 22, 7 ,"CANCER"},
    {23, 7, 22, 8 ,"LEO"},
    {23, 8, 22, 9 ,"VIRGO"},
    {23, 9, 22, 10 ,"LIBRA"},
    {23, 10, 21, 11 ,"SCORPIO"},
    {22, 11, 21, 12 ,"SAGITARIUS"}
  };

  int tanggal;
  int bulan;
  int tahun;

  cout << "selamat datang di program zodiak"<<endl;
    while (true) {
            // memasukkan input
  cout << "Tanggal Lahir Anda : ";
  cin >> tanggal;
  cout << "Bulan lahir anda :";
  cin >> bulan;
  cout << "Tahun lahir anda :";
  cin >> tahun;

  //cari zodiak
string zodiakAnda;
  for (int i = 0; i < sizeof (zodiak) / sizeof (zodiak[0]); i++) {
    if (bulan >= zodiak[i].bulanAwal && bulan <= zodiak[i].tanggalAkhir) {
        if ((bulan == zodiak[i].bulanAwal && tanggal >= zodiak[i].tanggalAwal)|| (bulan == zodiak[i].bulanAkhir && tanggal <= zodiak[i].tanggalAkhir)) {
      zodiakAnda = zodiak[i].nama;
      cout << "Tanggal lahir anda [tgl-bln-thn] :"<< tanggal <<'-'<< bulan <<'-'<<tahun<<endl;
      cout << "Zodiak Anda adalah: " << zodiakAnda << endl;
      break;
    }
  }
  }
}
  return 0;
}
