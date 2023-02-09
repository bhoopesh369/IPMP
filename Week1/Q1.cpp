//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int ans = 0 ;
        unordered_map<int,int> umap;
        for(int i = 0; i<n ; i++){
            if(umap.find(a[i])!=umap.end()){
                continue;
            }
            umap[a[i]] = a[i];
            ans++;
        }
        for(int i = 0; i<m ; i++){
            if(umap.find(b[i])!=umap.end()){
                continue;
            }
            umap[b[i]] = b[i];
            ans++;
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
