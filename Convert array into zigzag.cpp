class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    
	    if(n==0 or n==1 or n==2){
	        return;
	    }
	    
	    bool flag = true; // true -> smaller value first and false -> larger value first
	    
	    int fp=0, sp=1;
	    while(fp < n and sp < n){
	        
	        
	        if(flag){
	            if(arr[fp] > arr[sp]){
	                swap(arr[fp],arr[sp]);
	            }
	            flag=false;
	        }else{
	             if(arr[fp] < arr[sp]){
	                swap(arr[fp],arr[sp]);
	             }
	            flag=true;
	        }
	        
	        
	        fp+=1;
	        sp+=1;
	    }
	    
	}
};