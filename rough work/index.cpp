#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<string> s = {"h","e","l","l","o"};


    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i] << ",";

    }
    cout << endl;
}

