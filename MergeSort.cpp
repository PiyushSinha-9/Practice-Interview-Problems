
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef pair<long long,long long> pll;



#define F first
#define S second
#define print(x) for(auto iuiuiuiuiui:x){ cout<<iuiuiuiuiui<<" ";}br;
#define print_array(array,size) for(ll i=0;i<size;i++){ cout<<array[i]<<" ";}br;
#define br cout<<"\n"
#define max_val 1000000
#define mod 1000000007
#define pb(a) push_back(a)
#define mp(asd,fgh) make_pair(asd,fgh)
#define all(c) c.begin(),c.end()
#define check_ cout<<"yo";

#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);

#define INF LONG_LONG_MAX
#define N_INF LONG_LONG_MIN


#pragma GCC target("popcnt")

void mergeBoth(ll arr[],ll n,ll left,ll mid,ll right,ll &count){
    try{
    ll newArr[right - left + 1];
    
    ll fp = 0, sp = mid + 1, newP =0;
    
    while(fp <= mid and sp<=right ){
        
        if(arr[fp] < arr[sp]){
            newArr[newP] = arr[fp];
            fp+=1;
        }else{
            newArr[newP] = arr[sp];
            sp+=1;
        }
        
        newP+=1;
    }
    
    
    while(fp <= mid){
        newArr[newP] = arr[fp];
            fp+=1;
            newP+=1;
    }
    
    while(sp <= right){
        newArr[newP] = arr[sp];
            sp+=1;
            newP+=1;
    }
    
    
    for(ll i=0; i<right -left +1 ; ++i){
        arr[i] = newArr[i];
    }
    }
    catch(...) {
        cout<<"error yaha hai 1";br;
    }
    
}



void merge(ll arr[],ll n, ll &invCount, ll left, ll right){
    try{
    if(left >= right ){
        return;
    }

    ll mid = (left+right - 1)/2;
    
    merge(arr,n,invCount,left,mid);
    merge(arr,n,invCount,mid+1,right);
    
    mergeBoth(arr,n,left,mid,right,invCount);
    }
    catch(...){
        cout<<"error yaha hai 2";br;
    }
}



long long inversionCount(long long arr[], long long N)
{
    // Your Code Here
    try{
    ll invCount=0;
    merge(arr , N, invCount, 0, N-1);
    
    return invCount;
    }catch(...){
        cout<<"error yaha hai 3";br;
    }
    
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;

        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }br;
        inversionCount(arr, n);

        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        br;

    }

    
}