#include <iostream>
using namespace std;

int leaders(int arr[],int n)
{
    int temp =n;
    for(int i=0;i<n;i++)
    {
        if(temp>=arr[i])
        return  arr[i];
        else if(temp <arr[i]){
        temp =arr[i];
        return leaders(arr,temp);}
    }
    
}


int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int n;cin >>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin >> arr[j];
        }
        cout <<leaders(arr,arr[0]) <<" ";
    }
}