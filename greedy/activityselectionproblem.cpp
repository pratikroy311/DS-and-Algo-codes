#include <bits/stdc++.h> 
using namespace std; 

 
struct Activitiy 
{ 
	int start, finish; 
}; 


bool activityCompare(Activitiy s1, Activitiy s2) 
{ 
	return (s1.finish < s2.finish); 
} 


void printMaxActivities(Activitiy arr[], int n) 
{ 
    sort(arr,arr+n,activityCompare);
    int count= 1,j=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i].start >= arr[j].finish)
        {
            count++;
            j = i;
        }
    }
    cout << count;
} 

int main() 
{ 
	Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, 
									{5, 7}, {8, 9}}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printMaxActivities(arr, n); 
	return 0; 
} 
