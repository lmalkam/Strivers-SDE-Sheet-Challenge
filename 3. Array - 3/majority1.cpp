class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int x=0,c=0;

        for(auto it:nums)
        {
            if(c==0)
            {
                x=it;
                c++;
            }
            else if(it==x)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        

        return x;
        
    }
};