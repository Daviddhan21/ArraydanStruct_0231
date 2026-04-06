#include <iostream>
using namespace std;

struct detailAlamat 
{
    string desa;
    string kota;
};

struct orang 
{
    string nama;
    detailAlamat alamat;
    int umur;
};



    // menampilkan data
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << ", " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
 
}
