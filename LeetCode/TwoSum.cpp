//Time: 0ms (100%),Memory: 9.3 MB (80.91%)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v;
        unordered_map<int,int> h;
        for(int i=0;i<n;i++){
            int k=target-nums[i];
            if(h.find(k)!=h.end()){
                v.push_back(h[k]);
                v.push_back(i);
                return v;
            }
            h[nums[i]]=i;
        }
        return v;
    }
};
