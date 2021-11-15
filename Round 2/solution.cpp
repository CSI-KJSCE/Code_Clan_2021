#include<bits/stdc++.h> 
using namespace std; 
// O(N)

bool subString(string b,string a){
    if(b.length() ==0){
        return true;
    }

    if(b.length() > a.length()){
        return false;
    }

    int counter = 0; // pointing s2

    int i=0;
    for(i=0;i<a.length();i++)
    {
        if(counter==b.length())
            break;
        if(b[counter]==a[i])
        {
            counter++;
        }
      else
        {
            // Special case where character preceding the i'th character is duplicate
            if(counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < b.length()?false:true;

}

int main(){
    int T;
    cin >>T;

    while(T--){
        string a ;
        cin >>a;

        string b;
        cin >>b;

        if(subString(b,a)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}