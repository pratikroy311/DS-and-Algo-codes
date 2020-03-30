#include <iostream>
using namespace std;



int main()
{
    int T,N;
    cin >>T;
    for(int i=0;i<T;i++)
    {
        cin >>N;
        int arr[N];
        for(int j=0;j<N;j++)
        {
            cin >> arr[j];
        }
        for(int k=0;k<N;k++)
        {
            if(arr[k+1]<arr[k])
            cout << arr[k+1]<<" ";
            else
            {
                cout <<"-1 ";
            }
            
        }
        cout <<endl;
    }
}