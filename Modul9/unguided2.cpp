#include <iostream>
#include <string>
using namespace std;
const int MAX_VERTICES = 100;
int ilhan_2311102029;

void printWeights(const string vertices[], const int weights[][MAX_VERTICES],int numVertices){
    cout << "           ";
    for (int a=0; a<numVertices; a++){
        cout << vertices[a] << " ";
    }
    cout << endl;

    for (int a=0; a< numVertices; a++){
        cout << vertices[a] << " ";
        cout << string(10 - vertices[a].size(), ' ');

        for (int c=0; c<numVertices; c++){
            cout << weights[a][c] << " ";
        }
        cout << endl;
    }
}

int main(){
    string vertices[MAX_VERTICES];
    int weights[MAX_VERTICES][MAX_VERTICES];
    int numVertices = 0;

    int choice;
    while(true){
        cout << "1.Tambah data simpul" << endl;
        cout << "2.Tambah data bobot antar simpul" << endl;
        cout << "3.Tampilkan data bobot antar simpul" << endl;
        cout << "4.Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
            if (numVertices >= MAX_VERTICES){
                cout << "Jumlah simpul maksimum telah tercapai!" << endl;
            }else {
                cout << "Simpul " << numVertices + 1 << ": ";
                cin >> vertices[numVertices];
                numVertices++;
            }
            break;

            case 2:
            if (numVertices == 0){
                cout << "simpul belum ada yang ditambahkan!" << endl;
            }else {
                cout << "Silahkan masukan bobot antar simpul:" << endl;
                for (int a=0; a<numVertices; a++){
                    for (int c=0; c<numVertices; c++){
                        cout << vertices[a] << " - " << vertices[c] << ": ";
                        cin >> weights[a][c];
                    }
                }
            }
            break;

            case 3:
            if (numVertices == 0){
                cout << "simpul belum ada yang ditambahkan!" << endl;
            }else{
                cout << endl << "Bobot :" << endl;
                printWeights(vertices, weights, numVertices);
            }
            break;

            case 4:
            cout << "Terima kasih!" << endl;
            return 0;

            default:
            cout << "Pilihan tidak valid" << endl;
            break;
        }
        cout << endl;
    }
    return 0;
} // ILHAN SAHAL M // 2311102029