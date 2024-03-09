//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string str=s;
        int i=0;
        while(i<r){
            string out="";
            for(int j=0;j<=n;j++){
                if(str[j]=='0'){
                    out+="01";
                }
                else{
                    out+="10";
                }
            }
            str=out;
            i++;
        }
        return str[n];
        
        
    }
};
