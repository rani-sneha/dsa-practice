//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<vector<ll>> mat;
        vector<ll> ans;
        int mod=1e9+7;
        for(int i=0; i<n; i++)
        {
            vector<ll>v(i+1,1);
            for(int j=1; j<i; j++)
            {
                v[j]=(mat[i-1][j-1]+mat[i-1][j])%mod;
            }
            mat.push_back(v);
            ans=v;
        }
        return ans;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends