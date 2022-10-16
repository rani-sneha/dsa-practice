//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
                bool flag=true;
    for(int i=0; i<n; i++)
    {
        int temp=a[i];
        int r, sum=0;
        while(temp>0)
        {
            r=temp%10;
            temp/=10;
            sum=sum*10+r;
        }
        if(sum!=a[i])
        {
            flag=false;
            return 0;
        }
    }
    if(flag)
    return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends