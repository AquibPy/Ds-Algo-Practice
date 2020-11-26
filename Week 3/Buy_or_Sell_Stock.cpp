#include<bits/stdc++.h> 
using namespace std; 
int main() 
{
	int arr[] = {7, 1, 5, 3, 6, 4};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Min elemnt is "<<*min_element(arr,arr+n)<<endl;
	cout<<endl;

	cout<<"Best Day to Buy Stock at Day "<< distance(arr, min_element(arr, arr+n)) + 1 <<endl;
	cout<<endl;

	cout<<"Max element is "<< *max_element(min_element(arr,arr+n), arr+n)<<endl;
	cout<<endl;

	cout<<"Best Day to Sell Stock at Day "<< distance(arr, max_element(min_element(arr,arr+n), arr+n)) + 1 <<endl;
	cout<<endl;

	cout<<"Profit Gain "<<*max_element(min_element(arr,arr+n), arr+n) - *min_element(arr,arr+n);

	return 0; 
} 

