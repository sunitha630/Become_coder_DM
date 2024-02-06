#include<bits/stdc++.h>
using namespace std;
void combinations(vector<int>arr,int index,int target,vector<int>v,int sum,int size){
	if(index >= size && sum != target)
	{
		return;
	}
	else if(sum == target)
	{
		for(int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		return;
	}
	else if(sum > target)
	{
		return;
	}
	sum+=arr[index];
	v.push_back(arr[index]);
	combinations(arr,index+1,target,v,sum,size);
	sum-=arr[index];
	v.pop_back();
	combinations(arr,index+1,target,v,sum,size);	
}
int main(){
	int n,x;
	cin>>n;
	vector<int>arr;
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		arr.push_back(data);
	}
	cin>>x;
	sort(arr.begin(),arr.end());
	combinations(arr,0,x,{},0,n);
}