#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr [] = { 2,4,1,3,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int count = 0;
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				count++;
			}
		}
	}
	cout<<count;
}

