#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,q,l,r;
	cout<<"Enter Size of an Array:";
	cin>>n;
	vector<int> arr(n,0);
	cout<<"Enter Number of Queries:";
	cin>>q;
	while(q--)
	{
		cout<<"Enter L :";
		cin>>l;
		cout<<"Enter R :";
		cin>>r;
		arr[l]++;
		if(r+1<n)
		{
			arr[r+1]--;
		}
	}
	/*Cumulative sum*/
	for(int i=1;i<n;i++)
	{
		arr[i] = arr[i] + arr[i-1];
	}
	cout<<"Final Array is : ";
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
