#include<bits/stdc++.h> 
using namespace std; 

int main(){
    
    int T;
    cin >>T;

    while(T--){
        int N,P,K;
        cin >>N>>P>>K;

        N--;
        int c =0,day=0;
        int pmk=P%K;
        int nmk=N%K;
        int last=N-nmk;
        int x=last/K;
        x++;
        c=(P-pmk)/K;
        c=c+1;
            
        if(pmk>nmk){
            day=x*(nmk+1);
            day+=(x-1)*(pmk-nmk-1);
        }
        else
        day=x*(pmk);
        cout<<day+c<<endl;

    }
    return 0;
}