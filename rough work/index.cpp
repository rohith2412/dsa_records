#include <iostream>
#include <vector>


int main() {

    std::vector<int> nums = {2,3,4,5};

    for(int i = 0; i< nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
    return 0;
}