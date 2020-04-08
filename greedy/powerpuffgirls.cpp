/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;
long long result(long long q[],long long a[],long long n)
{
    long long res=a[0]/q[0];
    for(long long i=1;i<n;i++)
    {
        if(res > a[i]/q[i])
        {
            res = a[i]/q[i];
        }
    }
    
    return res;
}
int main()
{
	//Write code here
	int n;long long quant[n];long long a[n];
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>> quant[i];
    }
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

	
	
	cout << result(quant,a,n);
}
