void sortColors(vector<int>& nums) {
    int p0 = 0;
    int p1 = 0;
    int p2 = nums.size()-1;
    while (p1<=p2) {
        if (nums[p1]==0) {
            std::swap(nums[p0++], nums[p1++]);
        }            
        else if (nums[p1]==2) {
            std::swap(nums[p1], nums[p2--]);
        }
        else {
            ++p1;
        }
    }
}