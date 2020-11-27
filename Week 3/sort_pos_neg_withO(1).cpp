#include<bits/stdc++.h>
using namespace std;

void sort_array(int arr[],int n)
{
	map<int,bool>m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]] =true;
	}
	for(auto i:m)
	{
		cout<<i.first<<" ";
	}
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int arr[] = {-1,1,-2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort_array(arr,size);
	
	return 0;
}