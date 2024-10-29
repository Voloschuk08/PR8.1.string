#include <iostream>
#include <string>
using namespace std;

// Функція, яка перевіряє наявність пари "no" або "on" в рядку
bool ContainsPair(const string& s) {
    return (s.find("no") != string::npos || s.find("on") != string::npos);
}

// Функція, яка замінює кожну пару "no" на "***"
string ReplaceNo(string& s) {
    size_t pos = 0;
    while ((pos = s.find("no", pos)) != string::npos) {
        s.replace(pos, 2, "***");
        pos += 3; // перемістити позицію на кінець заміни, щоб уникнути зациклення
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Перевірка на наявність пар "no" або "on"
    bool contains = ContainsPair(str);
    cout << "Contains 'no' or 'on': " << (contains ? "Yes" : "No") << endl;

    // Заміна кожної пари "no" на "***"
    string modifiedStr = ReplaceNo(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
