#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

void ReplaceStringInPlace(string& subject, const string& search,
                          const string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}

int main() {
    string s;
    printf ("What do you need to translate today?\n");
    getline (cin, s);
    string q[] = {"Na", "na", "Ne", "ne", "Ni", "ni", "No", "no", "Nu", "nu", "R", "r", "L", "l", "Ove", "ove", "Th", "th", "!"};
    string r[] = {"Nya", "nya", "Nye", "nye", "Nyi", "nyi", "Nyo", "nyo", "Nyu", "nyu", "W", "w", "W", "w", "Uv", "uv", "D", "d", "! UwU"};
    for(int i = 0; i < 19; i++) {
        ReplaceStringInPlace(s, q[i], r[i]);
    }
    cout << s << endl;
}
