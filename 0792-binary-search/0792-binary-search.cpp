class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid;
        auto it=lower_bound(nums.begin(),nums.end(),target);
        if (it != nums.end() && *it == target){
            return it-nums.begin();
        }
        else{
            return -1;
        }
    }
};