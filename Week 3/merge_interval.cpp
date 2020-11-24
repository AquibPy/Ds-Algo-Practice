#include<bits/stdc++.h>
using namespace std;

struct Interval
{
	int start,end;
};

bool compareInterval(Interval a1, Interval a2)
{
	return (a1.start < a2.start);
}

void mergeInterval(Interval arr[], int n)
{
	if (n<=0)
	{
		return;
	}
	
	stack<Interval> s;
	sort(arr,arr+n,compareInterval);
	
	s.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		Interval top = s.top();
		if (top.end < arr[i].start)
		{
			s.push(arr[i]);
		}
		else if(top.end < arr[i].end)
		{
			top.end = arr[i].end;
			s.pop();
			s.push(top);
		}
	}
	
	cout<<"\nMerged Intervals are ";
	while(!s.empty())
	{
		Interval a = s.top();
		cout << "[" << a.start << "," << a.end << "] "; 
        s.pop();
	}
}

int main()
{
	Interval arr[] = { {1,3}, {2,6}, {8,10}, {15,18} };
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeInterval(arr,size);
}
