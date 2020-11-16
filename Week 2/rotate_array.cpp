#include<bits/stdc++.h>
using namespace std;

void show_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void rotated(int arr[],int size)
{
	int x = arr[size-1];
	for(int i = size-1;i>0;i--)
	arr[i] = arr[i-1];
	arr[0] = x;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n,arr[n];
	cout<<"Enter size of an Array: ";
	cin>>n;
	cout<<"Enter Element in an Array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array is ";
	show_array(arr,n);
	cout<<endl;
	cout<<"Rotated Array is ";
	rotated(arr,n);
	return 0;
}
