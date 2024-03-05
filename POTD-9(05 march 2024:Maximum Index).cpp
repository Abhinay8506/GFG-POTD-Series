 int maxIndexDiff(int a[], int n)

{ 
        int prefixmin[n];
        int suffixmax[n];
        prefixmin[0]=a[0];
        suffixmax[n-1]=a[n-1];
        for(int i=1;i<n;i++){
            prefixmin[i]=min(a[i],prefixmin[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suffixmax[i]=max(a[i],suffixmax[i+1]);
        }
        int i=0;
        int j=0;
        int ans=-1;
        while(i<n && j<n){
            if(prefixmin[i]<=suffixmax[j])
            {
               ans=max(ans,j-i);
               j++;
            }else{
                i++;
            }
        }
        return ans;
}
