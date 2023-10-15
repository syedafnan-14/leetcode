/*
    Given an integer array of unique elements, return all possible subsets (the power set)
    Ex. nums = [1,2,3] -> [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

    Backtracking, generate all combinations, push/pop + index checking to explore new combos

    Time: O(n x 2^n)
    Space: O(n)
*/

class Solution {
private:
        vector<vector<int>> res;
        void subsets(vector<int>& nums,vector<int>& temp,int i){
            if(i==nums.size()){
                res.push_back(temp);
                return;
            }
            temp.push_back(nums[i]);
            subsets(nums,temp,i+1);
            temp.pop_back();
            subsets(nums,temp,i+1);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        subsets(nums,temp,0);
        return res;
    }
};
