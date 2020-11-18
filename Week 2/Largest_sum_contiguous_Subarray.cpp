/*
we will use Kadane's Algorithm
Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far

*/

#include<iostream>
using namespace std;

void show_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int maxSubArraySum(int arr[],int size)
{
	int max_so_far = 0;
	int max_end_here = 0;
	for(int i=0;i<size;i++)
	{
	max_end_here +=arr[i];
	if(max_so_far<max_end_here)
	{
		max_so_far = max_end_here;
	}
	if(max_end_here<0)
	{
		max_end_here = 0;
	}
	
	}
	return max_so_far;
}

int main()
{
	int n,arr[n];
	cout<<"Enter Size of an Array: ";
	cin>>n;
	cout<<"\nEnter The Element in an Array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array is ";
	show_array(arr,n);
	int max = maxSubArraySum(arr,n);
	cout<<"\nMaximun Contiguous sum is "<<max;
	return 0;
}
