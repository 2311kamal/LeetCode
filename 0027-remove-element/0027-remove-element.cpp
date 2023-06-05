class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        int n = nums.size();
        int j = n - 1;
        int i;

        for (i = 0; i <= j ; i++)
        {

if(nums[i]==val && nums[j]!=val){swap(nums[i],nums[j--]);}
            
            if(nums[j]==val){j--;i--;}
        }
        return i;
    }
};