class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //std::set<int> unique_set(nums.begin(), nums.end());
        //return(nums.size() != unique_set.size());
        std::sort(nums.begin(), nums.end());
        bool isDuplicate = false;
        for (int i = 1; i < nums.size(); i++)
        {
             if(nums[i] == nums[i - 1])
             {
                isDuplicate = true;
                break;
             }
        }

        return isDuplicate;
    }
};
