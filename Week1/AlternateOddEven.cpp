//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int N) {
	    // code here
	    vector<int> p,n;
	    for(int i=N-1; i>=0; i--){
	        if(arr[i] >= 0)
	          p.push_back(arr[i]);
	        else
	          n.push_back(arr[i]);
	    }
	    int i=0;
	    while(i<N){
	        if(!p.empty()){
	            arr[i++] = p.back();
	            p.pop_back();
	        }
	        if(!n.empty()){
	            arr[i++] = n.back();
	            n.pop_back();
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
