class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();
       return help(nums,target,0,n-1);
        
    }
    
    private:
    
    int help(vector<int> nums,int k, int l, int r){
        
        
        if(r>=l){
            
            int mid=(l+r)/2;
            
            if(nums[mid]==k)return mid;
            
            else if(nums[mid]>k)return help(nums,k,l,mid-1);
            
            else{return help(nums,k,mid+1,r);}
            
        }
        
        else{
            return l;
        }
        
    }
    
};