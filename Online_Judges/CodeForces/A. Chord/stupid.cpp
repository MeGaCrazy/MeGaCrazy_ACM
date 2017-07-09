#include <bits/stdc++.h>

using namespace std;

map<string, int> value;
string s[3];

int Distance(string u, string v) {
    if (value[u] > value[v]) return (12 - value[u] + value[v]);
    else return (value[v] - value[u]);
}

int main() {
    value["C"] = 1;
    value["C#"] = 2;
    value["D"] = 3;
    value["D#"] = 4;
    value["E"] = 5;
    value["F"] = 6;
    value["F#"] = 7;
    value["G"] = 8;
    value["G#"] = 9;
    value["A"] = 10;
    value["B"] = 11;
    value["H"] = 12;

    bool ok1 = false, ok2 = false;
    for(int i = 0; i < 3; i++) cin >> s[i];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                if (i != j && j != k && k != i) {
                    int temp1 = Distance(s[i], s[j]);
                    int temp2 = Distance(s[j], s[k]);
                    if (temp1 == 4 && temp2 == 3) ok1 = true;
                    if (temp1 == 3 && temp2 == 4) ok2 = true;
                }
            }
        }
    }
    if (ok1) {
        cout << "major" << endl;
    }
    else if (ok2) {
        cout << "minor" << endl;
    }
    else cout << "strange" << endl;
}