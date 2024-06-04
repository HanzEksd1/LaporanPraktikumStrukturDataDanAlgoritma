#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int arr[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void binarysearch() {
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;  // Corrected the value from 7 to 6
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == cari) {
            b_flag = 1;
            break;
        } else if (arr[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1) {
        cout << "\narr ditemukan pada index ke " << tengah << endl;
    } else {
        cout << "\narr tidak ditemukan\n";
    }
}

int main() {
    cout << "\tBINARY SEARCH" << endl;
    cout << "\narr:";
    // tampilkan arr awal
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << arr[x];
    }
    cout << endl;
    cout << "\nMasukkan arr yang ingin Anda cari : ";
    cin >> cari;
    cout << "\narr diurutkan : ";
    // urutkan arr dengan selection sort
    selection_sort();
    // tampilkan arr setelah diurutkan
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << arr[x];
    }
    cout << endl;
    binarysearch();
    _getche();
    return EXIT_SUCCESS;
}