
#define F first
#define S second


bool compartor(pair<int,int> p1, pair<int,int> p2){
    if(p1.first < p2.first or ((p1.first == p2.first) and (p1.S < p2.S))){
        return true;
    }
    return false;
}


vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) {
    //code here
    vector<pair<int,int>> sol;
    if(n==0){
        return sol;
    }
    
    sort(vec.begin(),vec.end(),compartor);
    
    pair<int,int> store = vec[0];
    for(int i=1;i<n;i++){
        if( vec[i].first >= store.first and vec[i].first <=store.second ){
            store.first = min (store.first, vec[i].F);
            store.S = max(store.S, vec[i].S);
        }else{
            sol.push_back(store);
            store=vec[i];
        }    
    }
    
    sol.push_back(store);
    
    
    return sol;
    
}