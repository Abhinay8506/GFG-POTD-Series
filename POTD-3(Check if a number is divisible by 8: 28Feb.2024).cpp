class Solution{
    public:
    int DivisibleByEight(string s){
        int count=1;
        int sum=0;
        //code here
        int expr=s.length()>3?s.length()-3:0;
        for(int i=s.length()-1;i>=expr;i--){
            sum=s[i]*count+sum;
            count*=10;
        }
        if(sum%8==0){
            return 1;
        }
        return -1;
    }
};
