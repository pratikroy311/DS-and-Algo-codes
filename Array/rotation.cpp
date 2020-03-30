#include <iostream>

using namespace std;


int lesftrotateone(long long arr[],long long n){
    long long temp=arr[0],i;
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
int  rotate(long long arr[],long long d,long long n){
    for(long long i=0;i<d;i++){
        lesftrotateone(arr,n);
    }
}

void printArray(long long arr[], long long n) 
{ 
	for (long long i = 0; i < n; i++) 
		cout << arr[i] << " "; 
    cout << endl;
}

int main(){
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++)
    {
        long long t;cin >>t;
        long long d;
        cin >>d;
        long long arr[t];
        for(long long i=0;i<t;i++)
        {
            cin >>arr[i];
        }
        
        rotate(arr,d,t);
        printArray(arr,t);
    }
}