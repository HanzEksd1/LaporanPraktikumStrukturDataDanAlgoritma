#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
        string nama;
        string nim;
        int semester;
        void ambilmatakuliah(string mata_kuliah) {
            cout << nama << " Mengambil mata kuliah " << mata_kuliah << endl;
            cout << "NIM : " << nim << " " << " Semester : " << semester << endl;
        }
};

int main(){
    mahasiswa mhs1;
    mhs1.nama = "Angga";
    mhs1.nim = "12345";
    mhs1.semester = 3;

    mahasiswa mhs2;
    mhs2.nama = "Rafi";
    mhs2.nim = "67891";
    mhs2.semester = 2;

    mhs1.ambilmatakuliah("Pemrograman Berorientasi Objek");
    mhs2.ambilmatakuliah("sistem operasi");

    return 0;
}