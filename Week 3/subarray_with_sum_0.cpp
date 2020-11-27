#include<bits/stdc++.h>
using namespace std;
bool sum_check(int arr[],int n)
{
	unordered_set<int> v;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum +=arr[i];
		if(sum == 0 or v.find(sum) !=v.end())
		{
			return true;
		}
		else
		{
			v.insert(sum);
		}
	}
	return false;
}
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int arr [] = {4 ,2, -3, 1 ,6};
	int n = sizeof(arr)/sizeof(arr[0]);

	if(sum_check(arr,n))
	{
		cout<<"Yes";
	}
	return 0;
	return 0;
}