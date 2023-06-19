class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        map<long long,int>presummap;
        n=0;
        long long sum=0;
        int maxlen=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            if(sum==n)maxlen=max(maxlen,i+1);
            
            long long rem=sum-n;
            
            if(presummap.find(rem)!=presummap.end())
            {
                int len = i -presummap[rem];
                maxlen=max(len,maxlen);
            }
            
            if(presummap.find(sum)==presummap.end())
            {
                presummap[sum]=i;
            }
        }
        
        return maxlen;
    }
};