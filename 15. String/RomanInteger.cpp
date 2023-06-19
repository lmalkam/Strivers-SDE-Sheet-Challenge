class Solution {
public:
    int romanToInt(string s) {
        
        int sum=0,value1=9999,value2=0;
        
        if(s.length()==1){
        if(s[0]=='M')
                return 1000;
            if(s[0]=='D')
                return 500;
            if(s[0]=='C')
                return 100;
            if(s[0]=='L')
                return 50;
            if(s[0]=='X')
                return 10;
            if(s[0]=='V')
                return 5;
            if(s[0]=='I')
                return 1;
        }
        
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='M')
                value1=1000;
            if(s[i]=='D')
                value1=500;
            if(s[i]=='C')
                value1=100;
            if(s[i]=='L')
                value1=50;
            if(s[i]=='X')
                value1=10;
            if(s[i]=='V')
                value1=5;
            if(s[i]=='I')
                value1=1;
            
            if(s[i+1]=='M')
                value2=1000;
            if(s[i+1]=='D')
                value2=500;
            if(s[i+1]=='C')
                value2=100;
            if(s[i+1]=='L')
                value2=50;
            if(s[i+1]=='X')
                value2=10;
            if(s[i+1]=='V')
                value2=5;
            if(s[i+1]=='I')
                value2=1;
            
            if(value1<value2){
                sum+=-value1;
            }
            else
                sum+=value1;
                        
        }
    
        sum+=value2;
        return sum;
        
    }
};