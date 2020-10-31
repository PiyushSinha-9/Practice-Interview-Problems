/// initial dp array with arr provided then do the magic


class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    if(n==0) return -1;
	    vector<int> dp(n);
	
	    for(int i=0;i<n;i++){
	        dp[i]=arr[i];
	    }
	    
	    int maxA = arr[0];
	    
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j] < arr[i]){
	                dp[i] = max(dp[i], arr[i]+dp[j]);
	                maxA = max(maxA, dp[i]);
	            }
	        }
	    }
	    
	   // for(int i=0;i<n;++i){
	   //     cout<<dp[i]<<" ";
	   // }
	   // cout<<endl;
	    
	    return maxA;
	    
	    
	}  
};