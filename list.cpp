#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int> &digits) {
            reverse(digits.begin(), digits.end());
            vector<int> ans;
            int carry = 1;
            for (int i = 0; i < digits.size(); i++) {
                int sum = digits[i] + carry;
                ans.push_back(sum%10);
                carry = sum / 10;
            }
            while (carry) {
                ans.push_back(carry%10);
                carry /= 10;
            }
            while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
                ans.pop_back();
            }
            reverse(ans.begin(), ans.end());
            reverse(digits.begin(), digits.end());
            return ans;
        }
};


vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size()-1;
    int sum=A[n]+1;
    A[n]=sum%10;
    int carry=sum/10;
    for(int i=n-1;i>=0;i--)
    {
        int sum=A[i]+carry;
        A[i]=sum%10;
        carry=sum/10;
    }
    vector<int> B;
    if(carry==1)
    {
        B.push_back(1);
        for(int i=0;i<A.size();i++)
            B.push_back(A[i]);
        return B;
    }
    else 
    {
        bool done=false;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]!=0)
                done=true;
            if(done)
                B.push_back(A[i]);
        }
        
    }
}


vector<int> Solution::plusOne(vector<int> &A) {
   int n = A.size();
   int count = 0; 
   for(int i=n-1;i>=0;i--){
       if(A[i]==9) count++;
       else break;
   }
   if(count == n){
       cout<<"1 ";
       for(int i=1;i<=n;i++) cout<<"0 ";
   }
   else{
       int l = n-count-1;
       int flag = 0;
       for(int i=0;i<l;i++) if(A[i]!=0 || (flag!=0 && A[i]==0)) {flag = 1;cout<<A[i]<<" ";} else if(A[i]==0 && flag == 0);
       cout<<A[l] + 1<<" ";
       for(int i=1;i<=count;i++) cout<<"0 ";
   }
   vector<int> V;
   return V;
}



void add_fun(vector<int> &vec)
{
	int result=0;
	for(int i=0; i<vec.size(); i++)
	{
		result*=10;
		result+=vec[i];
	}
	result+=1;

	for(int i=0; i<result.len(); i++)
	{
		vec[vec.size()-i-1]=result%10;
		result=result/10;
		
	}	
}
int main()
{
	vector<int> arr{1,2,3,4};
	cout<<"Before:";
	vector<int> :: iterator i;
	for(i=arr.begin(); i<arr.end(); i++)
	{
		cout<<"->"<<*i;
	}

	add_fun(arr);
	cout<<"After:";
	for(i=arr.begin(); i<arr.end(); i++)
	{
		cout<<"->"<<*i;
	}	

	return 0;
}
