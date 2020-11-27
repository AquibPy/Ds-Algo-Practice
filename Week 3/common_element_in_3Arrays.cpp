#include<bits/stdc++.h>
using namespace std;

void common(int arr1[],int arr2[],int arr3[], int n1, int n2, int n3)
{
	set<int>hs;
	set<int>v;
	for(int i=0;i<n1;i++)
	{
		hs.insert(arr1[i]);
	}
	for(int i=0;i<n2;i++)
	{
		if(hs.find(arr2[i])!=hs.end())
		{
			v.insert(arr2[i]);
		}
		else
		{
			hs.insert(arr2[i]);
		}
	}
	for(int i=0;i<n3;i++)
	{
		if(hs.find(arr3[i])!=hs.end())
		{
			v.insert(arr3[i]);
		}
		else
		{
			hs.insert(arr3[i]);
		}
	}

	for(auto it=v.begin();it!=v.end();++it)
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

	int arr1[] = {1, 5, 10, 20, 40, 80};
	int arr2[] = {6, 7, 20, 80, 100};
	int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	int n3 = sizeof(arr3)/sizeof(arr3[0]);

	cout<<"Array 1 is ";

	for(int i=0;i<n1;i++)
	{
		cout<<arr1[i]<<" ";
	}

	cout<<"\nArray 2 is ";

	for(int i=0;i<n2;i++)
	{
		cout<<arr2[i]<<" ";
	}

	cout<<"\nArray 3 is ";

	for(int i=0;i<n3;i++)
	{
		cout<<arr3[i]<<" ";
	}

	cout<<"\nCommon Elements are ";
	common(arr1,arr2,arr3,n1,n2,n3);
	return 0;
}