class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int count = 0;
        while(count<nums.size())
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                count++;
                continue;
            }
            i++;
            count++;
        }
        return;
    }
};