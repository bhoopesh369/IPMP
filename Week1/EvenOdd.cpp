//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int> even;
	    vector<int> odd;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i] % 2 ==0)
	          even.push_back(arr[i]);
	        else
	          odd.push_back(arr[i]);
	    }
	    
	    sort(even.begin() , even.end());
	    sort(odd.begin() , odd.end());
	    int i = 0;
	    for(int num: even){
	        arr[i++] = num;
	    }
	    for(int num: odd){
	        arr[i++] = num;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
