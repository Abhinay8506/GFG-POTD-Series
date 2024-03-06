class Solution{
    public:
        vector<int> search(string pattern, string text)
        {
            /*vector<int>output;
            int m=text.length();
            int p=pattern.length();
            int i=0;
            int j=0;
            while(i<m){
                while(i<m && text[i]==pattern[j]){
                    i++;
                    j++;
                    if(j==p){
                        output.push_back(i-p+1);
                        j=0;
                    }
                    if(text[i]!=pattern[j]){
                        j=0;
                    }
                }
                j=0; 
                i++;
                
            }
            
            return output;*/
            
            int n=pattern.size();
            vector<int>ans;
            int s=0;
            int e=n-1;
            while(e<text.size()){
                if(text[s]==pattern[0]){
                    string temp=text.substr(s,n);
                    if(temp==pattern)ans.push_back(s+1);
                }
                s++;
                e++;
            }
            return ans;
        }
     
};
