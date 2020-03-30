#include <iostream>

using namespace std;

int sorted(int arr[] , int n)
{
    int temp,t=0;
    for(int i=0;i<n;i++)
    {
        temp = arr[i];
        if(temp >= arr[i])
        {
            t =arr[i];
            arr[i]= temp;
            temp = t;
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }/* 
     if(n%2==0)
    {
        cout << arr[n/2] <<" "<< arr[n/2+1] << " " << (arr[n/2]+arr[n/2+1])/2;
    }
    else
    {
        cout << arr[n/2];
    }*/
}
int main()
{
    int n;
    cout << "enter the total no of elements in an array you want to have: ";
    cin >> n;
    int arr[n];
    cout << "\nENTER THE ELEMENTS OF THE ARRAY : ";
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sorted(arr, n);
    
   
    
}