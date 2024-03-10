class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    bool vis[60]={0};
	    string ans="";
	    for(char i:str){
	        if(vis[i-'A'])continue;
	        ans.push_back(i);
	        vis[i-'A']=1;
	        
	    }
	    
	    return ans;
	}
};
