#include<bits/stdc++.h>
using namespace std;

//Approach 1
void merge_array(int arr1[],int arr2[],int n1,int n2)
{
	vector<int> g1;
	for(int i=0;i<n1;i++)
	{
		g1.push_back(arr1[i]);
	}
		for(int i=0;i<n2;i++)
	{
		g1.push_back(arr2[i]);
	}
	sort(g1.begin(), g1.end());
	for (auto i = g1.begin(); i != g1.end(); ++i) 
       cout << *i; 
}

int main()
{
	int n1=5;
	int arr1[] = {1,2,3,4,5};
	int n2 = 5;
	int arr2[] = {7,6,8,9,10};
	merge_array(arr1,arr2,n1,n2);
}

// Approach 2
void merge(vector<int>g1,vector<int>g2)
{
	vector<int>g3;
	for(int i=0;i<g1.size();i++)
	{
		g3.push_back(g1[i]);
	}
	for(int i=0;i<g2.size();i++)
	{
		g3.push_back(g2[i]);
	}
	sort(g3.begin(), g3.end());
	for (auto i = g3.begin(); i != g3.end(); ++i) 
        cout << *i;
	
}
int main()
{
	vector<int> g1{1,2,3,4,5},g2{7,8,6,9,10};
	merge(g1,g2);
}

/* Approch 3
Note: This Approach Works well only when elements in an arrays are in ascending order
*/
void merge(int arr1[],int arr2[],int n1,int n2, int arr3)
{
	int i = 0,j = 0, k= 0;
	while(i<n1 && j< n2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	// Store remaining elements of first array
	while(i<n1)
	{
		arr3[k++] = arr1[i++];
	}
	// Store remaining elements of second array 
	while(j<n2)
	{
		arr3[k++] = arr2[j++];
	}

}
int main()
{
	int arr1[] = {1, 3, 5, 7}; 
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
  
    int arr2[] = {2, 4, 6, 8}; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
  
    int arr3[n1+n2]; 
    mergeArrays(arr1, arr2, n1, n2, arr3);
	cout << "Array after merging" <<endl; 
    for (int i=0; i < n1+n2; i++) 
        cout << arr3[i] << " "; 
}
/*
Approch 4
a Map in C++ is sorted in increasing order based on its key. 
*/
void merge()
{
	map<int,bool>mp;
	for(int i = 0;i<n;i++)
	{
		mp[arr1[i]] = true;
	}
	for(int i = 0;i<m;i++)
	{
		mp[arr2[i]] = true;
	}
	for(auto i:mp)
	{
		cout<<i.first;
	}
}
int main()
{
	int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8}; 
      
    int n = sizeof(arr1)/sizeof(arr1[0]); 
    int m = sizeof(arr2)/sizeof(arr2[0]); 
      
    merge(arr1, arr2, n, m);
}