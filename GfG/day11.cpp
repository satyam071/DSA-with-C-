class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int maxProduct = nums[0];
            int maxVal = nums[0], minVal = nums[0];
    
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] < 0) {
                    std::swap(maxVal, minVal);
                }
    
                maxVal = std::max(nums[i], maxVal * nums[i]);
                minVal = std::min(nums[i], minVal * nums[i]);
    
                maxProduct = std::max(maxProduct, maxVal);
            }
    
            return maxProduct;
        }
    };