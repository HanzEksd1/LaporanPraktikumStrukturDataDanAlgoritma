#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string& str) {
    stack<char> charStack;
    string cleanStr;

    for (char c : str) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
            charStack.push(tolower(c));
        }
    }

    for (char c : cleanStr) {
        if (charStack.top() != c) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    char choice;
    string sentence;

    do {
        cout << "\nMasukkan Kalimat: ";  
        getline(cin, sentence);

        if (isPalindrome(sentence)) {
            cout << "Kalimat tersebut adalah palindrom." << endl;
        } else {
            cout << "Kalimat tersebut bukan palindrom." << endl;
        }

        cout << "\nIngin memasukkan kalimat lagi? (y/n): ";  
        cin >> choice;
        cin.ignore();

    } while (tolower(choice) == 'y');

    return 0;
}//Ilhan Sahal M // 2311102029