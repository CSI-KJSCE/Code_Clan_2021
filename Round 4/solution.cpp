#include<bits/stdc++.h> 
using namespace std; 

vector<vector<int>> findSittingArrangements(vector<vector<int>>& sittings) {
    int m = sittings.size();
    int n = sittings[0].size();
    vector<vector<int> >ans;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(sittings[i][j]==1 && (j==0 || sittings[i][j-1]==0) && (i==0 || sittings[i-1][j]==0)){
                vector<int>temp;
                temp.push_back(i);
                temp.push_back(j);
                int k=j;
                while(k<n && sittings[i][k]==1)
                    k++;
                k--;
                int l=i;
                while(l<m && sittings[l][j]==1)
                    l++;
                l--;
                temp.push_back(l);
                temp.push_back(k);
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> sitting_arrangement;
    int M,N;
    cin >>M>>N;
    vector<int> vect;
    for(int i=0;i<M;i++){
        vect.clear();
        for(int j=0;j<N;j++){
            int a;
            cin >>a;

            vect.push_back(a);

        }
        sitting_arrangement.push_back(vect);
    }

    vector<vector<int>> result = findSittingArrangements(sitting_arrangement);
    if(result.size()==0){
        cout<<"-1"<<endl;
    }
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}