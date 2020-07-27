#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    map<int,int>res_hash;
        vector <int> result;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(res_hash.find(target-nums[i])!=res_hash.end())
            {
                
                result.push_back(res_hash[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            else
                res_hash[nums[i]] = i;//?2-->0?3-->1?
        }       
}


int main()
{
	vector<int> v={2,3,7,11,15};
	vector<int> c;
	int a=9;
	c=twoSum(v,a);
	for(int i=0; i<c.size(); i++)
	{
		cout<<c[i]<<"  ";
	}
	return 0;
}
