

vector <int> countDistinct (int A[], int n, int k)
{
    //code here.
    
    int start=0;
    int end=k-1;
    
    map<int,int> freq;
    vector<int> ans;
    int unique=0;
    
    
    for(int i=start;i<=end;i++){
        freq[A[i]]+=1;
        
        if(freq[A[i]]==1){
            unique+=1;
        }
    
    }
    
    ans.push_back(unique);
    
    for(int i=k;i<n;i++){
        // remove
        
        if(freq[A[start]]!=0)
            freq[A[start]]-=1;
        if(freq[A[start]]==0){
            unique-=1;
        }
        start+=1;
        
        
        //add
        end+=1;
        freq[A[end]]+=1;
        if(freq[A[end]]==1){
            unique+=1;
        }
        
        ans.push_back(unique);
    }
    return ans;
}

// use hashmap in sliding window remove start value and check it was unique or not 
// add end value and check if t was unique add+1 in distant_count