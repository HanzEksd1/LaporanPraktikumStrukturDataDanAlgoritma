#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

bool binary_search(const string &kalimat, char cari)
{
    int awal = 0, akhir = kalimat.length() - 1;
    while (awal <= akhir)
    {
        int tengah = (awal + akhir) / 2;
        if (kalimat[tengah] == cari)
        {
            return true;
        }
        else if (kalimat[tengah] < cari)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    return false;
}

int main()
{
    string kalimat;
    char cari;
    cout << "Masukan Kalimat : ";
    getline(cin, kalimat);
    cout << "Masukan huruf yang ingin anda cari : ";
    cin >> cari;

    cari = tolower(cari);
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    sort(kalimat.begin(), kalimat.end());

    bool ditemukan = binary_search(kalimat, cari);
    if (ditemukan)
    {
        cout << "Huruf " << cari << " ditemukan dalam kalimat." << endl;
    }
    else
    {
        cout << "Huruf " << cari << " tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
} // ILHAN SAHAL MANSIZ // 2311102029