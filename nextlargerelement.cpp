#include<bits/stdc++.h>
using namespace std;
void nextlargestele(int arr[], int n)
{	
	
	for(int i=0; i<n; i++)
	{
		bool found=false;
		for(int j=i; j<n; j++)
		{
			if(arr[i]<arr[j]){
				cout<<arr[j]<<" ";
				found=true;
				break;
				
			}
		}
		if(!found)
			cout<<-1<<" ";
	}

}

/*int main()
{
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector <ll> arr(n), ans(n);
	    
	    for(int i = 0; i < n; i++)
	            cin >> arr[i];
	    stack <ll> s;
	    for(int i = n-1; i >= 0; i--) {
	        while(!s.empty() && arr[i] >= s.top())
	            s.pop();
	        ans[i] = s.empty() ? -1 : s.top();
	        s.push(arr[i]);
	    }
	    
	    for(int i = 0; i < n; i++)
	        cout << ans[i] << " ";
	    cout << endl;
	}
	return 0;
}*/

int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0; i<t; i++)
	{
		cin>>arr[i];
	}
	nextlargestele(arr,t);
	return 0;
}