/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one duplicate number in nums, return this duplicate number.
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
int main()
{
	int n,arr[n];
	cout<<"Enter the Size of an Array: ";
	cin>>n;
	cout<<"Enter An Element of an Array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array is ";
	show_array(arr,n);
	
	for(int i =0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<"\nDuplicate Element is "<<arr[i];
			}
		}
	}
}

/*
Another Approach

#include <iostream>
#include<set>
using namespace std;

int main() {
set<int> s;
int n;
cin>>n;
int arr[n+1];
for(int i=0;i<=n;i++)
{
    cin>>arr[i];
}
int c=0;
for(int i=0;i<=n;i++)
{
    s.insert(arr[i]);
    c++;
    if(c>(int)s.size())
    {
        cout<<arr[i];
        break;
    }
}
    return 0;
}
*/