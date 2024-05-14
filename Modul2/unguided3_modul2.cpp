#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan Nilai : ";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cout << "Masukan hasil ke-" << i+1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }

    float avg = (float) sum / n;
    cout << "Nilai Maksimum adalah " << max << endl;
    cout << "Nilai Minimum adalah " << min << endl;
    cout << "Nilai rata-rata adalah " << avg << endl;

    return 0;
}