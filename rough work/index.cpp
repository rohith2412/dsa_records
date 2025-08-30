#include <iostream>
#include <vector>
using namespace std;

// Length of Last Word

int main() {

    string s = "vascode gama";

    int length = 0;
    int i = s.size() - 1;

    while(i>=0 && s[i] != ' ') {
        length++;
        i--;
    }
       
    cout << length;

}