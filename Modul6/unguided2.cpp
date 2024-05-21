#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseSentence(string sentence) {
    stack<char> charStack;
    string reversedSentence = "";

    for (char &c : sentence) {
        if (c != ' ') {
            charStack.push(c);
        } else {
            while (!charStack.empty()) {
                reversedSentence += charStack.top();
                charStack.pop();
            }
            reversedSentence += ' ';
        }
    }

    while (!charStack.empty()) {
        reversedSentence += charStack.top();
        charStack.pop();
    }

    return reversedSentence;
}

int main() {
    string kalimat, hasil;
    cout << "Masukan Kalimat: ";
    getline(cin, kalimat);

    hasil = reverseSentence(kalimat);

    cout << "Hasil: " << hasil << endl;

    return 0;
}//Ilhan Sahal Mansiz // 2311102029