#include<bits/stdc++.h>
using namespace std;
void subset(int arr1[],int arr2[],int n1,int n2)
{
	unordered_set<int>v1;
	unordered_set<int>v2;
	for (int i = 0; i < n1; ++i)
	{
		v1.insert(arr1[i]);
	}

	for (int i = 0; i < n2; ++i)
	{
		if(v1.find(arr2[i])!=v1.end())
		{
			v2.insert(arr2[i]);
		}
	}
	for(auto it =v2.cbegin();it!=v2.cend();++it)
	{
		cout<<*it<<" ";
	}
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int arr1[] = {8 ,4 ,5 ,3 ,1 ,7 ,9};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int arr2[] = {5 ,1 ,3 ,7 ,9};
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	cout<<"\nArray 1 is ";
	for (int i = 0; i < n1; ++i)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<"\nArray 2 is ";
	for (int i = 0; i < n2; ++i)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<"\nSubSet is ";
	subset(arr1,arr2,n1,n2);
	return 0;
}