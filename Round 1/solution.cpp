#include<bits/stdc++.h> 
using namespace std; 

void solve(int N, int arr[]){
    if(N < 3){
        cout << "0" <<endl;
        return;
    }

    sort(arr,arr+N);

    // Considering three most probable cases
    // Case 1 : [1,2,3,4,5]
    int case1 = arr[0]*arr[1]*arr[2];

    // Case 2 : [-1,-2,-3,-4,-5]
    int case2 = arr[N-1]*arr[N-2]*arr[N-3];

    // Case 3 : [-1,-2,-3,2,4,6]
    int case3 = arr[0]*arr[N-1]*arr[N-2];

    // Finding and returning the minimum of all three cases
    int ans = min(case1,min(case2,case3));

    cout<<ans<<endl;
}

int main(){

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >>N;

        int arr[N];
        for(int i=0;i<N;i++){
            cin >>arr[i];
        }

        solve(N,arr);
    }
    
    return 0;
}