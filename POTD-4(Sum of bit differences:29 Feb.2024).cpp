//APPROACH-1
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long count=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++){
	            int temp=arr[i]^arr[j];//xor operator
	            count+=__builtin_popcount(temp);
	        }
	    }
	    return count;
	}
};

