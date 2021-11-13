#include<bits/stdc++.h> 
using namespace std; 
// O(N)


bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                       ch=='O' || ch=='U');
}

void solve(string input){

    int count =0;
    vector<char> result; // Final answer

    for(int i=0;i<input.length();i++){
        if (isVowel(input[i])){
            count++;
            result.push_back('3');
        }else{
            result.push_back(input[i]);
        }
    }

    cout <<count<<endl;
    for(auto i : result){
        cout<<i;
    }
    cout<<endl;
}

int main(){
    int T;
    cin >>T;

    while(T--){
        string inp;
        cin >>inp;

        solve(inp);
    }
    return 0;
}