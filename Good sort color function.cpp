void sortColors(vector<int>& nums) {
        int count = nums.size();
        int i = 0;
        while (count != 0) {
            if (nums[i] == 2) {
                nums.erase(nums.begin() + i);
                nums.push_back(2);
            } else if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.insert(nums.begin(), 0);
                i++;
            } else {
                i++;
            }
            count--;
        }
    }