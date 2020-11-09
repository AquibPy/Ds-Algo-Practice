#include<iostream>
using namespace std;

void reverse(int arr1[], int start, int end)
{
    while (start < end)
    {
        int temp = arr1[start]; 
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    } 
}

int main()
{
	int n,arr[n];
	cout<<"Enter Length of an Array :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	reverse(arr,0,n-1);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
