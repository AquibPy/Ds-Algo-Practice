#include<iostream>
#include<algorithm>
using namespace std;

void show(int arr[], int arr_size)
{
	for(int i;i<arr_size;i++)
	{
		cout<<arr[i]<< " ";
	}
}
int main()
{
	int num,arr[num],k;
	cout<<"Enter the Size of an Array:";
	cin>> num;
	cout<<"Enter the Elements in an Array:"<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"The Array is ";
	show(arr,num);
	cout<<endl;
	sort(arr,arr+num);
	cout<<"Which kth Smallest Number You Want? "<<endl;
	cin>>k;
	cout<<"The "<<k<<"th Smallest Element is "<<arr[k-1];
	
}
