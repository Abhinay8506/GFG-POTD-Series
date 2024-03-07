class Solution {
  public:
  /* BRUTE FORCE
    string getString(char x)
    {
     string s(1, x);
     return s;   
    }
    int countstr(string str,string substr)
    {
      int count=0;
      for (int i = 0; i <str.size()-1; i++)
      {
        int m = 0;
        int n = i;
        for (int j = 0; j < substr.size(); j++)
        {
            if (str[n] == substr[j])
            {
                m++;
            }
            n++;
        }
        if (m == substr.size())
        {
            count++;
        }
    
      }
     
      return count;
    }
    */
    
    string longestSubstring(string s, int n) {
        // code here
        /*string output;
        int i=0;
        int checklength=n/2;
        int index=-1;
        int length=0;
        while(i<n-1){
            string temp=getString(s[i]);
            if(countstr(s,temp)>1)
            {
                int j=i+1;
                int prelength=length;
                temp+=s[j];
                length=max(length,1);
                while(countstr(s,temp)>1 && temp.length()<=checklength && j<n){
                   
                    int tlen=temp.length();
                    length=max(length,tlen);
                    temp+=s[++j];
                }
                if(length>prelength){
                   index=i; 
                }

            }
            
            
            i++;
            
        }
        output=s.substr(index,length);
        if(output==""){
            return "-1";
        }
        return output;
        */
      //OPTIMISED APPROACH
        
        string ans = "-1";
        for(int i = 0, j = 0; j<n; ++j){
            string t = s.substr(i,j-i+1);
            if(s.find(t,j+1)!=-1)   ans = t;
            else    ++i;
        }
        return ans;
    }
};
