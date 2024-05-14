#include <iostream>
using namespace std;

int main () {
    int n, m, k;
    cout << "Masukan jumlah elemen ke-1: ";
    cin >> n;
    cout << "Masukan jumlah elemen ke-2: ";
    cin >> m;
    cout << "Masukan jumlah elemen ke-3: ";
    cin >> k;
        int arr[n][m][k];
            for (int i = 0; i < n; i++) {    
            for (int j = 0; j < m; j++) {    
            for (int l = 0; l < k; l++) {
                cout << "Masukan nilai : (" << i << ", " << j << ", " << l << "): ";
                cin >> arr[i][j][l];
            }
       }
    }
    cout << "Array tiga dimensi yang dibuat: " << endl;
    for (int i = 0; i < n; i++) {    
        for (int j = 0; j < m; j++) {    
            for (int l = 0; l < k; l++) {
                cout << arr[i][j][l] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}