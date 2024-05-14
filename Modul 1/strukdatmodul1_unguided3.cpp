#include <iostream>
#include <map>
using namespace std;

int main () {
    map<string, int> m;

    m["Rizard"] = 74;
    m["Arya"] = 85;
    m["Ariela"] = 94;

    cout << "Nilai Rizard : " << m["Rizard"] << endl;
    cout << "Nilai Arya : " << m["Arya"] << endl;
    cout << "Nilai Ariela : " << m["Ariela"] << endl;

    return 0;
}