class Solution {
public:
    string recur(string s,int n)
    {
        if(n==1)return s;
        string s1="";
        int c=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
                continue;
            }
            else
            {
                s1+=char(c+48);
                s1+=s[i];
                c=1;
            }
        }
        return recur(s1,n-1);
    }
    string countAndSay(int n) {
        string s="1";
        return recur(s,n);
    }
};