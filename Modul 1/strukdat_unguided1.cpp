#include <iostream>
using namespace std;

float hitungLuasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

float hitungKelilingPersegi(float sisi) {
    return 4 * sisi;
}

int main() {
    float alasSegitiga, tinggiSegitiga, sisiPersegi;

    cout << "Masukkan panjang alas segitiga: ";
    cin >> alasSegitiga;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;

    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisiPersegi;

    cout << "Luas segitiga dengan alas " << alasSegitiga << " dan tinggi " << tinggiSegitiga << " adalah: " << hitungLuasSegitiga(alasSegitiga, tinggiSegitiga) << endl;
    cout << "Keliling persegi dengan sisi " << sisiPersegi << " adalah: " << hitungKelilingPersegi(sisiPersegi) << endl;

    return 0;
}