#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int *data = new int[n]{9, 4, 1, 7, 10, 5, 4, 12, 4};
    int cari = 4;
    int count = 0;
    // algorithm sequintal search
    for (int i = 0; i <n; i++)
    {
        if (data[i] == cari)
        {
            count++;
        }
    }
    cout << "Data : {9, 4, 1, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "\nJumlah angka " << cari << " dalam data: " << count << endl;

    return 0;
} // ILHAN SAHAL MANSIZ // 2311102029