#include<unordered_map>
/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
    unordered_map<string, bool> dp;
    vector<string> sol;
    for(int i=0;i<row;i++){
        string temp="";
        for(int j=0;j<col;j++){
            if(M[i][j]==0){
                temp += '0';
            }else{
                temp+='1';
            }
        }
        if(dp[temp]==false){
            sol.push_back(temp);
            dp[temp]=true;
        }
    }

    for(string k:sol){
         for(char i : k){
                cout<<i<<" ";
            }
            cout<<"$";
    }
}