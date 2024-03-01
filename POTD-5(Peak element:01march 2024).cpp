
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       for(int i=0;i<n;i++){
          bool prevcheck=true;
          bool nextcheck=true;
           
          if((i-1)>=0 && arr[i]<arr[i-1]){
              prevcheck=false;
          } 
          if((i+1)<=n-1 && arr[i]<arr[i+1])
          {
              nextcheck=false;
          }
          if(prevcheck && nextcheck){
              return i;
          }
       }
    }
};
