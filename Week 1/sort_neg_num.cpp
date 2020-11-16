#include<bits/stdc++.h>
using namespace std;
void show_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void neg_sort(int arr[],int size)
{
	int j=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
			{
				swap(arr[i],arr[j]);	
			}
			j++;
		}
	}
}
int main()
{
	int n,arr[n];
	cout<<"Enter the size of an Array: ";
	cin>>n;
	cout<<"Enter Negative and Positive Number in an Array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The Array is ";
	show_array(arr,n);
	cout<<"Sorted Array is "<<endl;
	neg_sort(arr,n);
	show_array(arr,n);
	
}
