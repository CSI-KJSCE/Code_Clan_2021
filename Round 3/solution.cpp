#include<bits/stdc++.h> 
using namespace std; 

// Space comlpexity - O(1)

void solve(vector<int> &nums){
    stable_partition(nums.begin(),nums.end(),[](int n){return n!=4;});

    for(auto i :nums){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int T;
    cin >>T;

    while(T--){
        int N;
        cin >>N;

        vector<int> input;

        int a;
        for(int i=0;i<N;i++){
            cin >>a;
            input.push_back(a);
        }
        
        solve(input);
        

    }

    return 0;
}