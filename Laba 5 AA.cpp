/**************
Мхеян Роман   *
ПИ - 261      *
Вар 16        *
**************/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string line;
    if (!getline(cin, line)) { cout << "EMPTY\n"; return 0; }

    istringstream iss(line);
    vector<string> words;
    string w;
    while (iss >> w) words.push_back(w);

    if (words.empty()) { cout << "EMPTY\n"; return 0; }

    for (int i = (int)words.size() - 1; i >= 0; --i) {
        if (i != (int)words.size() - 1) cout << ' ';
        cout << words[i];
    }
    cout << '\n';
    return 0;
}