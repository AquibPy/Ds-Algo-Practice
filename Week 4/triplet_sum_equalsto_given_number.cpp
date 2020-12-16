#include<iostream>
using namespace std;

bool triplet(int arr[],int size,int num)
{
	for (int i = 0; i < size-2; i++)
	{
		for (int j = i+1 ; i < size-1; j++)
		{
			for (int k = j+1; i < size; k++)
			{
				if(arr[i]+arr[j]+arr[k] == num)
				{
					cout<<"Triplet is "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	int a[] = {1, 4, 45, 6, 10, 8};
	int num = 22;
	int size_a = sizeof(a)/sizeof(a[0]);
	cout<<"Array is ";
	for (int i = 0; i < size_a; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	triplet(a,size_a,num);
	return 0;
}