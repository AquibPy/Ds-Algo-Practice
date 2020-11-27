#include<iostream>
using namespace std;

int pair_count(int arr[],int size,int sum)
{
	int count = 0;
	for(int i=0;i<size;i++)
	{
		for(int j = i+1;j<size;j++)
		{
			if(arr[i]+arr[j] == sum)
			{
				count++;
			}
		}
	}
	return count;
}


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	int arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum;
	cin>>sum;
	cout<<"count of pair is "<<pair_count(arr,size,sum)<<endl;
	return 0;
}

/*Another Approch
to be continued.......
*/
