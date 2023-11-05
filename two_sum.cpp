#include <iostream>
#include <vector>

int main(void){
    
    return 0;
};

std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> coords;
        for (int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target){
                    coords.push_back(i);
                    coords.push_back(j);
                    // cout << coords[0] << coords[1] << endl; 
                }
            }
        }

        return coords;
    }