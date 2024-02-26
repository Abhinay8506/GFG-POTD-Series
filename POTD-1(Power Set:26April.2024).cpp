
class Solution{
	public:
    void solve(string nums,string output,int index,vector<string> &ans){
        if(index>=nums.size()){
            if(output!="") ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,index+1,ans);
        //include
        output.push_back(nums[index]);
        solve(nums,output,index+1,ans);
    }
	   
	   
	vector<string> AllPossibleStrings(string s){
		    // Code here
      vector<string>ans;
      string output;
      int index=0;
      solve(s,output,index,ans);
      sort(ans.begin(),ans.end());
      return ans; 
	}
};

