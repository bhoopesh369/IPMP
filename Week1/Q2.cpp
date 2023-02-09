//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        unordered_set<int> uset;
        for(int i=0; i<N; i++){
            if(uset.find(arr[i]) != uset.end()){
                uset.erase(arr[i]);
            }
            else{
                uset.insert(arr[i]);
            }
        }
        
        return *(uset.begin());
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
