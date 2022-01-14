class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(nums.size() == 1) return nums[0] >= target; 
        
        int head=0, tail=0, sum=0, length=nums.size()+1;
        while(tail < nums.size()){
            sum += nums[tail];
            if(sum >= target){
                while(sum >= target){
                    length = min(length, tail-head+1);
                    sum -= nums[head];
                    head++;
                }
            }
            tail++;
        }
        return (length==nums.size()+1)?0:length;
    }
};
