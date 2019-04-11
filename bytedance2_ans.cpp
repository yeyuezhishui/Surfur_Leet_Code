class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int> > ans;
        if(nums.size() < 3)
        {
            return ans;
        }
        if(nums.size() == 3)
        {
            if(nums[0]+nums[1]+nums[2] == 0)
            {
                vector<int> an;
                an.push_back(nums[0]);
                an.push_back(nums[1]);
                an.push_back(nums[2]);
                ans.push_back(an);
                return ans;
            }
            else return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size()-2; i++)
        {
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }

            if(nums[i] > 0)
            {
                return ans;
            }
            int front = i+1;
            int back = nums.size()-1;
            while(1)
            {
                if(front == back || front > back) break;
                if(front>i+1 && nums[front] == nums[front-1])
                {
                    front+=1;
                    continue;
                }
                if(back < nums.size()-1 && nums[back] == nums[back+1])
                {
                    back-=1;
                    continue;
                }
                if(nums[i]+nums[front]+nums[back] == 0)
                {
                    vector<int> an;
                    an.push_back(nums[i]);
                    an.push_back(nums[front]);
                    an.push_back(nums[back]);
                    ans.push_back(an);
                    front++;
                    back--;
                }
                else if(nums[i]+nums[front]+nums[back] > 0)
                {
                    back-=1;
                    continue;
                }
                else if(nums[i]+nums[front]+nums[back] < 0)
                {
                    front+=1;
                    continue;
                }
            }
        }
        return ans;
    }
};
