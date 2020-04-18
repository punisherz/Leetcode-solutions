class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first;
        int second; 
        bool count=false;
        vector<int> result;
        for(auto i=0;i<nums.size();i++){
            int diff = target-nums[i];
        for( auto j=0;j<nums.size();j++)
        {    
            if((nums[j]==diff)&&(i!=j))
            {
                int first = i;
                int second = j;
                result.push_back(first);
                result.push_back(second);
                count =true;
                 break;
                
                
            }
            if(count)
                break;
             
            
           
            
           
        }
            if(count)
                break;
         
         
        
        }
        
        return result;
        
        
    }
};
