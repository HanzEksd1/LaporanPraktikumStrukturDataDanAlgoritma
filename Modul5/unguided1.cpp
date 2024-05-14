#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    int nilai;
};

class HashTable
{
private:
    vector<vector<Mahasiswa>> data;

    int hash(string nim)
    {
        int sum = 0;
        for (char c : nim)
        {
            sum += c;
        }
        return sum % data.size();
    }

public:
    HashTable(int size)
    {
        data.resize(size);
    }

    void addData(string nama, string nim, int nilai)
    {
        Mahasiswa mhs = {nama, nim, nilai};
        int index = hash(nim);
        data[index].push_back(mhs);
        cout << "Data Mahasiswa Berhasil Ditambahkan " << endl;
    }

    void removeData(string nim)
    {
        int index = hash(nim);
        vector<Mahasiswa> &bucket = data[index];
        for (int i = 0; i < bucket.size(); i++)
        {
            if (bucket[i].nim == nim)
            {
                cout << "Data Mahasiswa : " << bucket[i].nama << " ( " << bucket[i].nim << " ) telah dihapus" << endl;
                bucket.erase(bucket.begin() + i);
                break;
            }
        }
    }

    Mahasiswa *findDatabyNim(string nim)
    {
        int index = hash(nim);
        vector<Mahasiswa> &bucket = data[index];
        for (int i = 0; i < bucket.size(); i++)
        {
            if (bucket[i].nim == nim)
            {
                cout << "Nama   : " << bucket[i].nama << endl;
                cout << "NIM    : " << bucket[i].nim << endl;
                cout << "Nilai  : " << bucket[i].nilai << endl;
                return &bucket[i];
            }
        }
        return nullptr;
    }

    vector<Mahasiswa *> findDataByScore(int minScore, int maxScore)
    {
        vector<Mahasiswa *> result;
        for (vector<Mahasiswa> &bucket : data)
        {
            for (Mahasiswa &mhs : bucket)
            {
                if (mhs.nilai >= minScore && mhs.nilai <= maxScore)
                {
                    cout << "Nama   : " << mhs.nama << endl;
                    cout << "NIM    : " << mhs.nim << endl;
                    cout << "Nilai  : " << mhs.nilai << endl;
                    result.push_back(&mhs);
                }
            }
        }
        return result;
    }

    void printData()
    {
        for (vector<Mahasiswa> &bucket : data)
        {
            for (Mahasiswa &mhs : bucket)
            {
                cout << "Nama   : " << mhs.nama << endl;
                cout << "NIM    : " << mhs.nim << endl;
                cout << "Nilai  : " << mhs.nilai << endl;
                cout << endl;
            }
        }
    }
};

int main()
{
    HashTable mahasiswaTable(100);
    int choice;
    string nama, nim;
    int nilai;

    do
    {
        cout << endl;
        cout << "Data Mahasiswa" << endl;
        cout << " 1. Tambah Data                         " << endl;
        cout << " 2. Hapus Data                          " << endl;
        cout << " 3. Cari Data Berdasarkan NIM           " << endl;
        cout << " 4. Cari Data Berdasarkan Nilai         " << endl;
        cout << " 5. Tampilkan Semua Data                " << endl;
        cout << " 6. Keluar                              " << endl;
        cout << "========================================" << endl;
        cout << endl;
        cout << "Masukan pilihan anda : ";
        cin >> choice;
        cin.ignore();
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Menu Input Data" << endl;
            cout << " Masukan Nama Mahasiswa : ";
            getline(cin, nama);
            cout << " Masukan Nim Mahasiswa  : ";
            cin >> nim;
            cout << " Masukan Nilai          : ";
            cin >> nilai;
            mahasiswaTable.addData(nama, nim, nilai);
            cout << endl;
            break;

        case 2:
            cout << "Hapus Data Mahasiswa" << endl;
            cout << " Masukan NIM Mahasiswa : ";
            cin >> nim;
            mahasiswaTable.removeData(nim);
            cout << endl;
            break;

        case 3:
            cout << "Menu Mencari Data Mahasiswa Berdasarkan NIM" << endl;
            cout << " Masukan NIM Mahasiswa : ";
            cin >> nim;
            mahasiswaTable.findDatabyNim(nim);
            cout << endl;
            break;

        case 4:
            cout << "Menu Mencari Data Mahasiswa Berdasarkan Nilai" << endl;
            cout << " Data mahasiswa dengan nilai 80-90 : " << endl;
            mahasiswaTable.findDataByScore(80, 90);
            break;

        case 5:
            cout << "Tampilkan Semua Data" << endl;
            mahasiswaTable.printData();
            break;

        case 6:
            cout << "Anda Telah Keluar Dari Program" << endl;
            break;

        default:
            break;
        }

    } while (choice != 6);
    return 0;
}