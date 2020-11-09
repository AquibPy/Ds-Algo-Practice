// C++ program to find the max 
// of Array using sort() in STL 

//*max_element (first_index, last_index);
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n];
	cout<<"Enter size of an Array: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Array is ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nMax Element = "<<*max_element(arr,arr+n)<<endl;
	cout<<"\nMin Element = "<<*min_element(arr,arr+n)<<endl;
}
