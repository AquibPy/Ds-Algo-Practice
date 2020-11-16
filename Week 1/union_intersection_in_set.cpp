// Find the Union and Intersection of the two sorted arrays.
#include<bits/stdc++.h>
using namespace std;
void print_union(int arr1[],int size1,int arr2[],int size2)
{
	set<int> hs;
	for(int i=0;i<size1;i++)
	{
		hs.insert(arr1[i]);
	}
	for(int i=0; i<size2;i++)
	{
		hs.insert(arr2[i]);
	}
	for(auto it = hs.begin();it!=hs.end();it++)
	{
		cout<<*it<<" ";
	}
}

void print_intersection(int arr1[],int size1,int arr2[],int size2)
{
	set<int> hs;
	for(int i=0;i<size1;i++)
	{
		hs.insert(arr1[i]);
	}
	for(int i=0; i<size2;i++)
	{
		if(hs.find(arr2[i]) != hs.end())
		{
			cout<<arr2[i]<<" ";
		}
	}
	
}

void show_set(int arr[],int size)
{
	for(int i= 0; i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n1,n2,arr1[n1],arr2[n2];
	cout<<"Enter Size of Set 1 :";
	cin>> n1;
	cout<<"Enter Elements in Set 1:";
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	
	cout<<"Enter Size of Set 2 :";
	cin>>n2;
	cout<<"Enter Elements in Set 2:";
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	
	cout<<"Set 1 is ";
	show_set(arr1,n1);
	cout<<endl;
	
	cout<<"Set 2 is ";
	show_set(arr2,n2);
	cout<<endl;
	
	cout<<"Union of Two Sets is ";
	print_union(arr1,n1,arr2,n2);
	cout<<endl;
	
	cout<<"Intersection of Two Sets is ";
	print_intersection(arr1,n1,arr2,n2);
	cout<<endl;
	
}













