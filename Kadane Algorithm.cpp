const int INF= 1e9 + 7; 

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    if(n==0){
        return 0;
    }
    
    if(n==1)
    {
        return arr[0];
    }
    
    int maxSumEver = arr[0];
    
    int maxSumTemp = arr[0];
    
    for(int i=1;i<n;i++){
        if(maxSumTemp + arr[i] > arr[i]){
            maxSumTemp = maxSumTemp + arr[i];
        }else{
            maxSumTemp = arr[i];
        }
        
        maxSumEver = max(maxSumEver , maxSumTemp);
    }
    maxSumEver = max(maxSumEver , maxSumTemp);
    
    return maxSumEver;
    
    
}