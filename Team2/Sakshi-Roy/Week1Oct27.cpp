q1. Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ::rotate(nums.begin(),nums.begin()+(nums.size()-(k%nums.size())),nums.end()); 
    }
};

q2. Sieve of Erastosthenes
#include<iostream>
#include<vector>

using namespace std;

class Solution
{
	public:
    vector<int> sieveOfEratosthenes(int N)
    {
    	vector<int> num;
        int j,i,k=0;
        for(i=2;i<=N;i++)
        {
           for(j=2;j<=N;j++)
            {
                if(i==j)
                {
                    num.push_back(i);
                    break;
                }
                if(i%j==0)
                break;
            }
        }
        return num;
    }
};
    
int main()
{
	int N,k,n;
	cin>>N;
	vector<int> arr;
	Solution ob;
	arr=ob.sieveOfEratosthenes(N);
	n=arr.size();
	for(k=0;k<n;k++)
	cout<<"\t"<<arr[k];
	return 0;
}

//q3.Count negative numbers in a sorted matrix
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res=0;
int i=0;
int x=grid.size();
int j=grid[0].size()-1;
while(i<x&&j>=0)
{
if(grid[i][j]>=0)
i++;
else
{
res=res+x-i;
j--;
}

        }
    return res;  
    }
};

//q4. MAximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int n=nums.size();
        if(n==1)return nums[0];
        
        int mid=(n-1)/2;
        
        vector<int> left=vector<int>(nums.begin(),nums.begin()+mid+1);
        vector<int> right=vector<int>(nums.begin()+mid+1,nums.end());
        int ans=max(maxSubArray(left), maxSubArray(right));
        
        int sum=0;
        int pref_left=nums[mid];
        for(int i=mid;i>=0;i--){
            sum+=nums[i];
            pref_left=max(pref_left,sum);
        }
        
        sum=0;
        int pref_right=nums[mid+1];
        for(int i=mid+1;i<n;i++){
            sum+=nums[i];
            pref_right=max(pref_right,sum);
        }
        
        return max(ans,pref_left+pref_right);
    }
};
