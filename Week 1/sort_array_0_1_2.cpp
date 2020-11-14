//Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.

#include<bits/stdc++.h>
using namespace std;
void show_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void sort_array(int arr[],int size)
{
	int count0=0, count1=0,count2=0;
	for(int i=0;i<size;i++)
	{
		switch(arr[i])
		{
			case 0:
				count0++;
				break;
			case 1:
				count1++;
				break;
			case 2:
				count2++;
				break;
		}
	}
	int i=0;
	while(count0>0)
	{
		arr[i++] = 0;
		count0--;
	}
	while(count1>0)
	{
		arr[i++] = 1;
		count1--;
	}
	while(count2>0)
	{
		arr[i++] = 2;
		count2--;
	}
	show_array(arr,size);
}

int main()

{
	int n,arr[n];
	cout<<"Enter Size of an Array:";
	cin>>n;
	cout<<"Enter the Elements(only o,1 and 2) in an Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The Array is ";
	show_array(arr,n);
	cout<<endl;
	cout<<"The Sorted Array is ";
	sort_array(arr,n);
}
