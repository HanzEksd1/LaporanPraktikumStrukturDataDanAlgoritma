#include <iostream>
#include <string>
using namespace std;
const int max_vertices = 100;
int ilhan_2311102029;

int main(){
    int numvertices;
    cout << "Silahkan Masukan jumlah simpul  : ";
    cin >> numvertices;

    string vertices[max_vertices];
    int weight[max_vertices][max_vertices];

    cout << "Silahkan masukan nama simpul" << endl;
    for (int i = 0; i < numvertices; i++){
        cout << "simpul" << i+1 << ": ";
        cin >> vertices[i];
    }

    cout << "silahkan masukan bobot antar simpul" << endl;
    for(int i=0; i<numvertices; i++){
        for(int h=0; h<numvertices; h++){
        cout <<vertices[i] << " - " <<vertices[h]<<": ";
        cin >> weight[i][h];
    }
}
cout<<endl<<"bobot: " << endl;

cout << "               ";
for(int i=0; i<numvertices; i++){
    cout<<vertices[i]<<" ";
}
cout<<endl;

for (int i=0; i<numvertices; i++){
    cout<<vertices[i]<<" ";
    cout<< string(10- vertices[i].size(), ' ');

    for (int h=0; h<numvertices; h++){
        cout << weight[i][h]<< " ";
    }
    cout << endl;
}
return 0;
} // ILHAN SAHAL MANSIZ // 2311102029