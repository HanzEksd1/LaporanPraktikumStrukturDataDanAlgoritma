#include <iostream>
#include <algorithm>
using namespace std;

int hurufVokal(const string &kalimat)
{
    int count = 0;
    string vokal = "aiueo";
    string lowercaseKalimat = kalimat;
    transform(lowercaseKalimat.begin(), lowercaseKalimat.end(), lowercaseKalimat.begin(), ::tolower);
    for (char c : lowercaseKalimat)
    {
        if (vokal.find(c) != string::npos)
        {
            count++;
        }
    }
return count;
}
int main()
{
    string kalimat;
    cout << "Masukan Kalimat : ";
    getline(cin, kalimat);
    int jumlahVokal = hurufVokal(kalimat);
    cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
} // ILHAN SAHAL MANSIZ // 2311102029