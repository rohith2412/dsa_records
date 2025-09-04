#include <iostream>
#include <vector>
using namespace std;

vector<string> names = {"Mary","John","Emma"};
vector<int> heights = {180,165,170};

int main() {
    for(int i=0; i<names.size(); i++) {
        cout << names[i] << " : " << heights[i] << endl;
    }
    return 0;
}