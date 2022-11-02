//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int ans=helper(arr, k, 0, n-1);
        return ans;
    }
    int helper(int arr[], int k, int low, int high)
    {
        if(low>high)
            return -1;
            int mid=(low+high)/2;
            if(arr[mid]==k)
                return mid;
            if(arr[mid]<k)
                return helper(arr, k, mid+1, high);
            if(arr[mid]>k)
                return helper(arr, k, low, mid-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends